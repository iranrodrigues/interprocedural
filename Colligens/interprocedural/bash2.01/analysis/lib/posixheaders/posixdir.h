/* posixdir.h -- Posix directory reading includes and defines. */

/* Copyright (C) 1987,1991 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   Bash is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with Bash; see the file COPYING.  If not, write to the Free
   Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. */

/* This file should be included instead of <dirent.h> or <sys/dir.h>. */

#if !defined (_POSIXDIR_H_)
#define _POSIXDIR_H_

#if defined (HAVE_DIRENT_H)
//#  include <dirent.h>
#  define D_NAMLEN(d)   (strlen ((d)->d_name))
#else
#  if defined (HAVE_SYS_NDIR_H)
//#    include <sys/ndir.h>
#  endif
#  if defined (HAVE_SYS_DIR_H)
//#    include <sys/dir.h>
#  endif
#  if defined (HAVE_NDIR_H)
//#    include <ndir.h>
#  endif
#  if !defined (dirent)
#    define dirent direct
#  endif /* !dirent */
#  define D_NAMLEN(d)   ((d)->d_namlen)
#endif /* !HAVE_DIRENT_H */

#if defined (STRUCT_DIRENT_HAS_D_INO) && !defined (STRUCT_DIRENT_HAS_D_FILENO)
#  define d_fileno d_ino
#endif

#endif /* !_POSIXDIR_H_ */
