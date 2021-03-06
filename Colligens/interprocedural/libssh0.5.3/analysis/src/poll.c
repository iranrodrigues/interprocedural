/*
 * poll.c - poll wrapper
 *
 * This file is part of the SSH Library
 *
 * Copyright (c) 2009-2010 by Andreas Schneider <mail@cynapses.org>
 * Copyright (c) 2003-2009 by Aris Adamantiadis
 * Copyright (c) 2009 Aleksandar Kanchev
 *
 * The SSH Library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or (at your
 * option) any later version.
 *
 * The SSH Library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with the SSH Library; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
 * MA 02111-1307, USA.
 *
 * vim: ts=2 sw=2 et cindent
 */

//#include "config.h"

//#include <errno.h>

//#include "libssh/priv.h"
//#include "libssh/libssh.h"
//#include "libssh/poll.h"
//#include "libssh/socket.h"
//#include "libssh/session.h"

#ifndef SSH_POLL_CTX_CHUNK
#define SSH_POLL_CTX_CHUNK			5
#endif

/**
 * @defgroup libssh_poll The SSH poll functions.
 * @ingroup libssh
 *
 * Add a generic way to handle sockets asynchronously.
 *
 * It's based on poll objects, each of which store a socket, its events and a
 * callback, which gets called whenever an event is set. The poll objects are
 * attached to a poll context, which should be allocated on per thread basis.
 *
 * Polling the poll context will poll all the attached poll objects and call
 * their callbacks (handlers) if any of the socket events are set. This should
 * be done within the main loop of an application.
 *
 * @{
 */

struct ssh_poll_handle_struct {
  ssh_poll_ctx ctx;
  union {
    socket_t fd;
    size_t idx;
  } x;
  short events;
  ssh_poll_callback cb;
  void *cb_data;
};

struct ssh_poll_ctx_struct {
  ssh_poll_handle *pollptrs;
  ssh_pollfd_t *pollfds;
  size_t polls_allocated;
  size_t polls_used;
  size_t chunk_size;
};

#ifdef HAVE_POLL
//#include <poll.h>

void ssh_poll_init(void) {
    return;
}

void ssh_poll_cleanup(void) {
    return;
}

int ssh_poll(ssh_pollfd_t *fds, nfds_t nfds, int timeout) {
  return poll((struct pollfd *) fds, nfds, timeout);
}

#else /* HAVE_POLL */

typedef int (*poll_fn)(ssh_pollfd_t *, nfds_t, int);
static poll_fn ssh_poll_emu;

//#include <sys/types.h>

#ifdef _WIN32
#ifndef STRICT
#define STRICT
#endif /* STRICT */

//#include <time.h>
//#include <windows.h>
//#include <winsock2.h>
#else /* _WIN32 */
//#include <sys/select.h>
//#include <sys/socket.h>
//#include <unistd.h>
//#include <sys/time.h>
#endif /* _WIN32 */


/*
 * This is a poll(2)-emulation using select for systems not providing a native
 * poll implementation.
 *
 * Keep in mind that select is terribly inefficient. The interface is simply not
 * meant to be used with maximum descriptor value greater, say, 32 or so.  With
 * a value as high as 1024 on Linux you'll pay dearly in every single call.
 * poll() will be orders of magnitude faster.
 */
static int bsd_poll(ssh_pollfd_t *fds, nfds_t nfds, int timeout) {
  fd_set readfds, writefds, exceptfds;
  struct timeval tv, *ptv;
  socket_t max_fd;
  int rc;
  nfds_t i;

  if (fds == NULL) {
      errno = EFAULT;
      return -1;
  }

  FD_ZERO (&readfds);
  FD_ZERO (&writefds);
  FD_ZERO (&exceptfds);

  /* compute fd_sets and find largest descriptor */
  for (rc = -1, max_fd = 0, i = 0; i < nfds; i++) {
      if (fds[i].fd == SSH_INVALID_SOCKET) {
          continue;
      }
#ifndef _WIN32
      if (fds[i].fd >= FD_SETSIZE) {
          rc = -1;
          break;
      }
#endif

      if (fds[i].events & (POLLIN | POLLRDNORM)) {
          FD_SET (fds[i].fd, &readfds);
      }
      if (fds[i].events & (POLLOUT | POLLWRNORM | POLLWRBAND)) {
          FD_SET (fds[i].fd, &writefds);
      }
      if (fds[i].events & (POLLPRI | POLLRDBAND)) {
          FD_SET (fds[i].fd, &exceptfds);
      }
      if (fds[i].fd > max_fd &&
          (fds[i].events & (POLLIN | POLLOUT | POLLPRI |
                            POLLRDNORM | POLLRDBAND |
                            POLLWRNORM | POLLWRBAND))) {
          max_fd = fds[i].fd;
          rc = 0;
      }
  }

  if (max_fd == SSH_INVALID_SOCKET || rc == -1) {
      errno = EINVAL;
      return -1;
  }

  if (timeout < 0) {
      ptv = NULL;
  } else {
      ptv = &tv;
      if (timeout == 0) {
          tv.tv_sec = 0;
          tv.tv_usec = 0;
      } else {
          tv.tv_sec = timeout / 1000;
          tv.tv_usec = (timeout % 1000) * 1000;
      }
  }

  rc = select (max_fd + 1, &readfds, &writefds, &exceptfds, ptv);
  if (rc < 0) {
      return -1;
  }

  for (rc = 0, i = 0; i < nfds; i++)
    if (fds[i].fd >= 0) {
        fds[i].revents = 0;

        if (FD_ISSET(fds[i].fd, &readfds)) {
            int save_errno = errno;
            char data[64] = {0};
            int ret;

            /* support for POLLHUP */
            ret = recv(fds[i].fd, data, 64, MSG_PEEK);
#ifdef _WIN32
            if ((ret == -1) &&
                (errno == WSAESHUTDOWN || errno == WSAECONNRESET ||
                 errno == WSAECONNABORTED || errno == WSAENETRESET)) {
#else
            if ((ret == -1) &&
                (errno == ESHUTDOWN || errno == ECONNRESET ||
                 errno == ECONNABORTED || errno == ENETRESET)) {
#endif
                fds[i].revents |= POLLHUP;
            } else {
                fds[i].revents |= fds[i].events & (POLLIN | POLLRDNORM);
            }

            errno = save_errno;
        }
        if (FD_ISSET(fds[i].fd, &writefds)) {
            fds[i].revents |= fds[i].events & (POLLOUT | POLLWRNORM | POLLWRBAND);
        }

        if (FD_ISSET(fds[i].fd, &exceptfds)) {
            fds[i].revents |= fds[i].events & (POLLPRI | POLLRDBAND);
        }

        if (fds[i].revents & ~POLLHUP) {
          rc++;
        }
    } else {
        fds[i].revents = POLLNVAL;
    }

  return rc;
}

void ssh_poll_init(void) {
    ssh_poll_emu = bsd_poll;
}

void ssh_poll_cleanup(void) {
    ssh_poll_emu = bsd_poll;
}

int ssh_poll(ssh_pollfd_t *fds, nfds_t nfds, int timeout) {
    return (ssh_poll_emu)(fds, nfds, timeout);
}

#endif /* HAVE_POLL */

/**
 * @brief  Allocate a new poll object, which could be used within a poll context.
 *
 * @param  fd           Socket that will be polled.
 * @param  events       Poll events that will be monitored for the socket. i.e.
 *                      POLLIN, POLLPRI, POLLOUT
 * @param  cb           Function to be called if any of the events are set.
 *
 * @param  userdata     Userdata to be passed to the callback function. NULL if
 *                      not needed.
 *
 * @return              A new poll object, NULL on error
 */

ssh_poll_handle ssh_poll_new(socket_t fd, short events, ssh_poll_callback cb,
    void *userdata) {
    ssh_poll_handle p;

    p = malloc(sizeof(struct ssh_poll_handle_struct));
    if (p == NULL) {
        return NULL;
    }
    ZERO_STRUCTP(p);

    p->x.fd = fd;
    p->events = events;
    if (cb != NULL) {
        p->cb = cb;
    }
    if (userdata != NULL) {
        p->cb_data = userdata;
    }

    return p;
}


/**
 * @brief  Free a poll object.
 *
 * @param  p            Pointer to an already allocated poll object.
 */

void ssh_poll_free(ssh_poll_handle p) {
	if(p->ctx != NULL){
		ssh_poll_ctx_remove(p->ctx,p);
		p->ctx=NULL;
	}
  SAFE_FREE(p);
}

/**
 * @brief  Get the poll context of a poll object.
 *
 * @param  p            Pointer to an already allocated poll object.
 *
 * @return              Poll context or NULL if the poll object isn't attached.
 */
ssh_poll_ctx ssh_poll_get_ctx(ssh_poll_handle p) {
  return p->ctx;
}

/**
 * @brief  Get the events of a poll object.
 *
 * @param  p            Pointer to an already allocated poll object.
 *
 * @return              Poll events.
 */
short ssh_poll_get_events(ssh_poll_handle p) {
  return p->events;
}

/**
 * @brief  Set the events of a poll object. The events will also be propagated
 *         to an associated poll context.
 *
 * @param  p            Pointer to an already allocated poll object.
 * @param  events       Poll events.
 */
void ssh_poll_set_events(ssh_poll_handle p, short events) {
  p->events = events;
  if (p->ctx != NULL) {
    p->ctx->pollfds[p->x.idx].events = events;
  }
}

/**
 * @brief  Set the file descriptor of a poll object. The FD will also be propagated
 *         to an associated poll context.
 *
 * @param  p            Pointer to an already allocated poll object.
 * @param  fd       New file descriptor.
 */
void ssh_poll_set_fd(ssh_poll_handle p, socket_t fd) {
  if (p->ctx != NULL) {
    p->ctx->pollfds[p->x.idx].fd = fd;
  } else {
  	p->x.fd = fd;
  }
}

/**
 * @brief  Add extra events to a poll object. Duplicates are ignored.
 *         The events will also be propagated to an associated poll context.
 *
 * @param  p            Pointer to an already allocated poll object.
 * @param  events       Poll events.
 */
void ssh_poll_add_events(ssh_poll_handle p, short events) {
  ssh_poll_set_events(p, ssh_poll_get_events(p) | events);
}

/**
 * @brief  Remove events from a poll object. Non-existent are ignored.
 *         The events will also be propagated to an associated poll context.
 *
 * @param  p            Pointer to an already allocated poll object.
 * @param  events       Poll events.
 */
void ssh_poll_remove_events(ssh_poll_handle p, short events) {
  ssh_poll_set_events(p, ssh_poll_get_events(p) & ~events);
}

/**
 * @brief  Get the raw socket of a poll object.
 *
 * @param  p            Pointer to an already allocated poll object.
 *
 * @return              Raw socket.
 */

socket_t ssh_poll_get_fd(ssh_poll_handle p) {
  if (p->ctx != NULL) {
    return p->ctx->pollfds[p->x.idx].fd;
  }

  return p->x.fd;
}
/**
 * @brief  Set the callback of a poll object.
 *
 * @param  p            Pointer to an already allocated poll object.
 * @param  cb           Function to be called if any of the events are set.
 * @param  userdata     Userdata to be passed to the callback function. NULL if
 *                      not needed.
 */
void ssh_poll_set_callback(ssh_poll_handle p, ssh_poll_callback cb, void *userdata) {
  if (cb != NULL) {
    p->cb = cb;
    p->cb_data = userdata;
  }
}

/**
 * @brief  Create a new poll context. It could be associated with many poll object
 *         which are going to be polled at the same time as the poll context. You
 *         would need a single poll context per thread.
 *
 * @param  chunk_size   The size of the memory chunk that will be allocated, when
 *                      more memory is needed. This is for efficiency reasons,
 *                      i.e. don't allocate memory for each new poll object, but
 *                      for the next 5. Set it to 0 if you want to use the
 *                      library's default value.
 */
ssh_poll_ctx ssh_poll_ctx_new(size_t chunk_size) {
    ssh_poll_ctx ctx;

    ctx = malloc(sizeof(struct ssh_poll_ctx_struct));
    if (ctx == NULL) {
        return NULL;
    }
    ZERO_STRUCTP(ctx);

    if (chunk_size == 0) {
        chunk_size = SSH_POLL_CTX_CHUNK;
    }

    ctx->chunk_size = chunk_size;

    return ctx;
}

/**
 * @brief  Free a poll context.
 *
 * @param  ctx          Pointer to an already allocated poll context.
 */
void ssh_poll_ctx_free(ssh_poll_ctx ctx) {
  if (ctx->polls_allocated > 0) {
    while (ctx->polls_used > 0){
      ssh_poll_handle p = ctx->pollptrs[0];
      ssh_poll_ctx_remove(ctx, p);
    }

    SAFE_FREE(ctx->pollptrs);
    SAFE_FREE(ctx->pollfds);
  }

  SAFE_FREE(ctx);
}

static int ssh_poll_ctx_resize(ssh_poll_ctx ctx, size_t new_size) {
  ssh_poll_handle *pollptrs;
  ssh_pollfd_t *pollfds;

  pollptrs = realloc(ctx->pollptrs, sizeof(ssh_poll_handle *) * new_size);
  if (pollptrs == NULL) {
    return -1;
  }

  pollfds = realloc(ctx->pollfds, sizeof(ssh_pollfd_t) * new_size);
  if (pollfds == NULL) {
    ctx->pollptrs = realloc(pollptrs, sizeof(ssh_poll_handle *) * ctx->polls_allocated);
    return -1;
  }

  ctx->pollptrs = pollptrs;
  ctx->pollfds = pollfds;
  ctx->polls_allocated = new_size;

  return 0;
}

/**
 * @brief  Add a poll object to a poll context.
 *
 * @param  ctx          Pointer to an already allocated poll context.
 * @param  p            Pointer to an already allocated poll object.
 *
 * @return              0 on success, < 0 on error
 */
int ssh_poll_ctx_add(ssh_poll_ctx ctx, ssh_poll_handle p) {
  socket_t fd;

  if (p->ctx != NULL) {
    /* already attached to a context */
    return -1;
  }

  if (ctx->polls_used == ctx->polls_allocated &&
      ssh_poll_ctx_resize(ctx, ctx->polls_allocated + ctx->chunk_size) < 0) {
    return -1;
  }

  fd = p->x.fd;
  p->x.idx = ctx->polls_used++;
  ctx->pollptrs[p->x.idx] = p;
  ctx->pollfds[p->x.idx].fd = fd;
  ctx->pollfds[p->x.idx].events = p->events;
  ctx->pollfds[p->x.idx].revents = 0;
  p->ctx = ctx;

  return 0;
}

/**
 * @brief  Add a socket object to a poll context.
 *
 * @param  ctx          Pointer to an already allocated poll context.
 * @param  s            A SSH socket handle
 *
 * @return              0 on success, < 0 on error
 */
int ssh_poll_ctx_add_socket (ssh_poll_ctx ctx, ssh_socket s) {
  ssh_poll_handle p_in, p_out;
  int ret;
  p_in=ssh_socket_get_poll_handle_in(s);
  if(p_in==NULL)
  	return -1;
  ret = ssh_poll_ctx_add(ctx,p_in);
  if(ret != 0)
    return ret;
  p_out=ssh_socket_get_poll_handle_out(s);
  if(p_in != p_out)
    ret = ssh_poll_ctx_add(ctx,p_out);
  return ret;
}


/**
 * @brief  Remove a poll object from a poll context.
 *
 * @param  ctx          Pointer to an already allocated poll context.
 * @param  p            Pointer to an already allocated poll object.
 */
void ssh_poll_ctx_remove(ssh_poll_ctx ctx, ssh_poll_handle p) {
  size_t i;

  i = p->x.idx;
  p->x.fd = ctx->pollfds[i].fd;
  p->ctx = NULL;

  ctx->polls_used--;

  /* fill the empty poll slot with the last one */
  if (ctx->polls_used > 0 && ctx->polls_used != i) {
    ctx->pollfds[i] = ctx->pollfds[ctx->polls_used];
    ctx->pollptrs[i] = ctx->pollptrs[ctx->polls_used];
  }

  /* this will always leave at least chunk_size polls allocated */
  if (ctx->polls_allocated - ctx->polls_used > ctx->chunk_size) {
    ssh_poll_ctx_resize(ctx, ctx->polls_allocated - ctx->chunk_size);
  }
}

/**
 * @brief  Poll all the sockets associated through a poll object with a
 *         poll context. If any of the events are set after the poll, the
 *         call back function of the socket will be called.
 *         This function should be called once within the programs main loop.
 *
 * @param  ctx          Pointer to an already allocated poll context.
 * @param  timeout      An upper limit on the time for which ssh_poll_ctx() will
 *                      block, in milliseconds. Specifying a negative value
 *                      means an infinite timeout. This parameter is passed to
 *                      the poll() function.
 * @returns SSH_OK      No error.
 *          SSH_ERROR   Error happened during the poll.
 *          SSH_AGAIN   Timeout occured
 */

int ssh_poll_ctx_dopoll(ssh_poll_ctx ctx, int timeout) {
  int rc;
  int i, used;
  ssh_poll_handle p;
  socket_t fd;
  int revents;

  if (!ctx->polls_used)
    return 0;

  rc = ssh_poll(ctx->pollfds, ctx->polls_used, timeout);
  if(rc < 0)
    return SSH_ERROR;
  if (rc == 0)
    return SSH_AGAIN;
  used = ctx->polls_used;
  for (i = 0; i < used && rc > 0; ) {
    if (!ctx->pollfds[i].revents) {
      i++;
    } else {
      int ret;

      p = ctx->pollptrs[i];
      fd = ctx->pollfds[i].fd;
      revents = ctx->pollfds[i].revents;

      if (p->cb && (ret = p->cb(p, fd, revents, p->cb_data)) < 0) {
        if (ret == -2) {
            return -1;
        }
        /* the poll was removed, reload the used counter and start again */
        used = ctx->polls_used;
        i=0;
      } else {
        ctx->pollfds[i].revents = 0;
        i++;
      }

      rc--;
    }
  }

  return rc;
}

/**
 * @internal
 * @brief gets the default poll structure for the current session,
 * when used in blocking mode.
 * @param session SSH session
 * @returns the default ssh_poll_ctx
 */
ssh_poll_ctx ssh_poll_get_default_ctx(ssh_session session){
	if(session->default_poll_ctx != NULL)
		return session->default_poll_ctx;
	/* 2 is enough for the default one */
	session->default_poll_ctx = ssh_poll_ctx_new(2);
	return session->default_poll_ctx;
}

/** @} */

/* vim: set ts=4 sw=4 et cindent: */
