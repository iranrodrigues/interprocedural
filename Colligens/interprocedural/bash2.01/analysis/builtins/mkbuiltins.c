/* mkbuiltins.c - Create builtins.c, builtext.h, and builtdoc.c from
   a single source file called builtins.def. */

/* Copyright (C) 1987, 1989, 1991 Free Software Foundation, Inc.

This file is part of GNU Bash, the Bourne Again SHell.

Bash is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 1, or (at your option) any later
version.

Bash is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License along
with Bash; see the file COPYING.  If not, write to the Free Software
Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. */

//#include <config.h>

#if defined (HAVE_UNISTD_H)
//#  include <unistd.h>
#endif

//#include "../bashtypes.h"
//#include <sys/file.h>
//#include "../posixstat.h"
//#include "../filecntl.h"

#if defined (HAVE_UNISTD_H)
//#  include <unistd.h>
#endif /* HAVE_UNISTD_H */

//#include "../bashansi.h"
//#include <stdio.h>

#define DOCFILE "builtins.texi"

static char *xmalloc (), *xrealloc ();

#if !defined (__STDC__) && !defined (strcpy)
extern char *strcpy ();
#endif /* !__STDC__ && !strcpy */

#define savestring(x) strcpy (xmalloc (1 + strlen (x)), (x))
#define whitespace(c) (((c) == ' ') || ((c) == '\t'))

/* Flag values that builtins can have. */
#define BUILTIN_FLAG_SPECIAL	0x01
#define BUILTIN_FLAG_ASSIGNMENT 0x02

/* If this stream descriptor is non-zero, then write
   texinfo documentation to it. */
FILE *documentation_file = (FILE *)NULL;

/* Non-zero means to only produce documentation. */
int only_documentation = 0;

/* Non-zero means to not do any productions. */
int inhibit_production = 0;

#if !defined (OLDCODE)
int no_long_document = 0;
#endif /* !OLDCODE */

/* The name of a directory to precede the filename when reporting
   errors. */
char *error_directory = (char *)NULL;

/* The name of the structure file. */
char *struct_filename = (char *)NULL;

/* The name of the external declaration file. */
char *extern_filename = (char *)NULL;

/* Here is a structure for manipulating arrays of data. */
typedef struct {
  int size;		/* Number of slots allocated to array. */
  int sindex;		/* Current location in array. */
  int width;		/* Size of each element. */
  int growth_rate;	/* How fast to grow. */
  char **array;		/* The array itself. */
} ARRAY;

/* Here is a structure defining a single BUILTIN. */
typedef struct {
  char *name;		/* The name of this builtin. */
  char *function;	/* The name of the function to call. */
  char *shortdoc;	/* The short documentation for this builtin. */
  char *docname;	/* Possible name for documentation string. */
  ARRAY *longdoc;	/* The long documentation for this builtin. */
  ARRAY *dependencies;	/* Null terminated array of #define names. */
  int flags;		/* Flags for this builtin. */
} BUILTIN_DESC;

/* Here is a structure which defines a DEF file. */
typedef struct {
  char *filename;	/* The name of the input def file. */
  ARRAY *lines;		/* The contents of the file. */
  int line_number;	/* The current line number. */
  char *production;	/* The name of the production file. */
  FILE *output;		/* Open file stream for PRODUCTION. */
  ARRAY *builtins;	/* Null terminated array of BUILTIN_DESC *. */
} DEF_FILE;

/* The array of all builtins encountered during execution of this code. */
ARRAY *saved_builtins = (ARRAY *)NULL;

/* The Posix.2 so-called `special' builtins. */
char *special_builtins[] =
{
  ":", ".", "source", "break", "continue", "eval", "exec", "exit",
  "export", "readonly", "return", "set", "shift", "trap", "unset",
  (char *)NULL
};

/* The builtin commands that take assignment statements as arguments. */
char *assignment_builtins[] =
{
  "alias", "declare", "export", "local", "readonly", "typeset",
  (char *)NULL
};

/* Forward declarations. */
static int is_special_builtin ();
static int is_assignment_builtin ();

void extract_info ();

void file_error ();
void line_error ();

void write_file_headers ();
void write_file_footers ();
void write_ifdefs ();
void write_endifs ();
void write_documentation ();
void write_longdocs ();
void write_builtins ();

void free_defs ();
void add_documentation ();

void must_be_building ();
void remove_trailing_whitespace ();

/* For each file mentioned on the command line, process it and
   write the information to STRUCTFILE and EXTERNFILE, while
   creating the production file if neccessary. */
int
main (argc, argv)
     int argc;
     char **argv;
{
  int arg_index = 1;
  FILE *structfile, *externfile;
  char *documentation_filename, *temp_struct_filename;

  structfile = externfile = (FILE *)NULL;
  documentation_filename = DOCFILE;
  temp_struct_filename = (char *)NULL;

  while (arg_index < argc && argv[arg_index][0] == '-')
    {
      char *arg = argv[arg_index++];

      if (strcmp (arg, "-externfile") == 0)
	extern_filename = argv[arg_index++];
      else if (strcmp (arg, "-structfile") == 0)
	struct_filename = argv[arg_index++];
      else if (strcmp (arg, "-noproduction") == 0)
	inhibit_production = 1;
      else if (strcmp (arg, "-document") == 0)
	documentation_file = fopen (documentation_filename, "w");
      else if (strcmp (arg, "-D") == 0)
	{
	  int len;

	  if (error_directory)
	    free (error_directory);

	  error_directory = xmalloc (2 + strlen (argv[arg_index]));
	  strcpy (error_directory, argv[arg_index]);
	  len = strlen (error_directory);

	  if (len && error_directory[len - 1] != '/')
	    strcat (error_directory, "/");

	  arg_index++;
	}
      else if (strcmp (arg, "-documentonly") == 0)
	{
	  only_documentation = 1;
	  documentation_file = fopen (documentation_filename, "w");
	}
#if !defined (OLDCODE)
      else if (strcmp (arg, "-nodocument") == 0)
	no_long_document = 1;
#endif /* !OLDCODE */        
      else
	{
	  fprintf (stderr, "%s: Unknown flag %s.\n", argv[0], arg);
	  exit (2);
	}
    }

  /* If there are no files to process, just quit now. */
  if (arg_index == argc)
    exit (0);

  if (!only_documentation)
    {
      /* Open the files. */
      if (struct_filename)
	{
	  temp_struct_filename = xmalloc (15);
	  sprintf (temp_struct_filename, "mk-%d", (int) getpid ());
	  structfile = fopen (temp_struct_filename, "w");

	  if (!structfile)
	    file_error (temp_struct_filename);
	}

      if (extern_filename)
	{
	  externfile = fopen (extern_filename, "w");

	  if (!externfile)
	    file_error (extern_filename);
	}

      /* Write out the headers. */
      write_file_headers (structfile, externfile);
    }

  if (documentation_file)
    {
      fprintf (documentation_file, "@c Table of builtins created with %s.\n",
	       argv[0]);
      fprintf (documentation_file, "@ftable @asis\n");
    }

  /* Process the .def files. */
  while (arg_index < argc)
    {
      register char *arg;

      arg = argv[arg_index++];

      extract_info (arg, structfile, externfile);
    }

  /* Close the files. */
  if (!only_documentation)
    {
      /* Write the footers. */
      write_file_footers (structfile, externfile);

      if (structfile)
	{
	  write_longdocs (structfile, saved_builtins);
	  fclose (structfile);
	  link (temp_struct_filename, struct_filename);
	  unlink (temp_struct_filename);
	}

      if (externfile)
	fclose (externfile);
    }

  if (documentation_file)
    {
      fprintf (documentation_file, "@end ftable\n");
      fclose (documentation_file);
    }

  exit (0);
}

/* **************************************************************** */
/*								    */
/*		  Array Functions and Manipulators		    */
/*								    */
/* **************************************************************** */

/* Make a new array, and return a pointer to it.  The array will
   contain elements of size WIDTH, and is initialized to no elements. */
ARRAY *
array_create (width)
     int width;
{
  ARRAY *array;

  array = (ARRAY *)xmalloc (sizeof (ARRAY));
  array->size = 0;
  array->sindex = 0;
  array->width = width;

  /* Default to increasing size in units of 20. */
  array->growth_rate = 20;

  array->array = (char **)NULL;

  return (array);
}

/* Copy the array of strings in ARRAY. */
ARRAY *
copy_string_array (array)
     ARRAY *array;
{
  register int i;
  ARRAY *copy;

  if (!array)
    return (ARRAY *)NULL;

  copy = array_create (sizeof (char *));

  copy->size = array->size;
  copy->sindex = array->sindex;
  copy->width = array->width;

  copy->array = (char **)xmalloc ((1 + array->sindex) * sizeof (char *));
  
  for (i = 0; i < array->sindex; i++)
    copy->array[i] = savestring (array->array[i]);

  copy->array[i] = (char *)NULL;

  return (copy);
}

/* Add ELEMENT to ARRAY, growing the array if neccessary. */
void
array_add (element, array)
     char *element;
     ARRAY *array;
{
  if (array->sindex + 2 > array->size)
    array->array = (char **)xrealloc
      (array->array, (array->size += array->growth_rate) * array->width);

#if defined (HAVE_BCOPY)
  bcopy (&element, (char *) &(array->array[array->sindex]), array->width);
  array->sindex++;
  bzero ((char *) &(array->array[array->sindex]), array->width);
#else
  array->array[array->sindex++] = element;
  array->array[array->sindex] = (char *)NULL;
#endif /* !HAVE_BCOPY */
}

/* Free an allocated array and data pointer. */
void
array_free (array)
     ARRAY *array;
{
  if (array->array)
    free (array->array);

  free (array);
}

/* **************************************************************** */
/*								    */
/*		       Processing a DEF File			    */
/*								    */
/* **************************************************************** */

/* The definition of a function. */
typedef int Function ();

/* Structure handles processor directives. */
typedef struct {
  char *directive;
  Function *function;
} HANDLER_ENTRY;

extern int
  builtin_handler (), function_handler (), short_doc_handler (),
  comment_handler (), depends_on_handler (), produces_handler (),
  end_handler (), docname_handler ();

HANDLER_ENTRY handlers[] = {
  { "BUILTIN", builtin_handler },
  { "DOCNAME", docname_handler },
  { "FUNCTION", function_handler },
  { "SHORT_DOC", short_doc_handler },
  { "$", comment_handler },
  { "COMMENT", comment_handler },
  { "DEPENDS_ON", depends_on_handler },
  { "PRODUCES", produces_handler },
  { "END", end_handler },
  { (char *)NULL, (Function *)NULL }
};

/* Return the entry in the table of handlers for NAME. */
HANDLER_ENTRY *
find_directive (directive)
     char *directive;
{
  register int i;

  for (i = 0; handlers[i].directive; i++)
    if (strcmp (handlers[i].directive, directive) == 0)
      return (&handlers[i]);

  return ((HANDLER_ENTRY *)NULL);
}

/* Non-zero indicates that a $BUILTIN has been seen, but not
   the corresponding $END. */
static int building_builtin = 0;

/* Non-zero means to output cpp line and file information before
   printing the current line to the production file. */
int output_cpp_line_info = 0;

/* The main function of this program.  Read FILENAME and act on what is
   found.  Lines not starting with a dollar sign are copied to the
   $PRODUCES target, if one is present.  Lines starting with a dollar sign
   are directives to this program, specifying the name of the builtin, the
   function to call, the short documentation and the long documentation
   strings.  FILENAME can contain multiple $BUILTINs, but only one $PRODUCES
   target.  After the file has been processed, write out the names of
   builtins found in each $BUILTIN.  Plain text found before the $PRODUCES
   is ignored, as is "$$ comment text". */
void
extract_info (filename, structfile, externfile)
     char *filename;
     FILE *structfile, *externfile;
{
  register int i;
  DEF_FILE *defs;
  struct stat finfo;
  char *buffer, *line;
  int fd;

  if (stat (filename, &finfo) == -1)
    file_error (filename);

  fd = open (filename, O_RDONLY, 0666);

  if (fd == -1)
    file_error (filename);

  buffer = xmalloc (1 + (int)finfo.st_size);

  if (read (fd, buffer, finfo.st_size) != finfo.st_size)
    file_error (filename);

  close (fd);

  /* Create and fill in the initial structure describing this file. */
  defs = (DEF_FILE *)xmalloc (sizeof (DEF_FILE));
  defs->filename = filename;
  defs->lines = array_create (sizeof (char *));
  defs->line_number = 0;
  defs->production = (char *)NULL;
  defs->output = (FILE *)NULL;
  defs->builtins = (ARRAY *)NULL;

  /* Build the array of lines. */
  i = 0;
  while (i < finfo.st_size)
    {
      array_add (&buffer[i], defs->lines);

      while (buffer[i] != '\n' && i < finfo.st_size)
	i++;
      buffer[i++] = '\0';
    }

  /* Begin processing the input file.  We don't write any output
     until we have a file to write output to. */
  output_cpp_line_info = 1;

  /* Process each line in the array. */
  for (i = 0; line = defs->lines->array[i]; i++)
    {
      defs->line_number = i;

      if (*line == '$')
	{
	  register int j;
	  char *directive;
	  HANDLER_ENTRY *handler;

	  /* Isolate the directive. */
	  for (j = 0; line[j] && !whitespace (line[j]); j++);

	  directive = xmalloc (j);
	  strncpy (directive, line + 1, j - 1);
	  directive[j -1] = '\0';

	  /* Get the function handler and call it. */
	  handler = find_directive (directive);

	  if (!handler)
	    {
	      line_error (defs, "Unknown directive `%s'", directive);
	      free (directive);
	      continue;
	    }
	  else
	    {
	      /* Advance to the first non-whitespace character. */
	      while (whitespace (line[j]))
		j++;

	      /* Call the directive handler with the FILE, and ARGS. */
	      (*(handler->function)) (directive, defs, line + j);
	    }
	  free (directive);
	}
      else
	{
	  if (building_builtin)
	    add_documentation (defs, line);
	  else if (defs->output)
	    {
	      if (output_cpp_line_info)
		{
		  /* If we're handed an absolute pathname, don't prepend
		     the directory name. */
		  if (defs->filename[0] == '/')
		    fprintf (defs->output, "#line %d \"%s\"\n",
			     defs->line_number + 1, defs->filename);
		  else
		    fprintf (defs->output, "#line %d \"%s%s\"\n",
			     defs->line_number + 1,
			     error_directory ? error_directory : "./",
			     defs->filename);
		  output_cpp_line_info = 0;
		}

	      fprintf (defs->output, "%s\n", line);
	    }
	}
    }

  /* Close the production file. */
  if (defs->output)
    fclose (defs->output);

  /* The file has been processed.  Write the accumulated builtins to
     the builtins.c file, and write the extern definitions to the
     builtext.h file. */
  write_builtins (defs, structfile, externfile);

  free (buffer);
  free_defs (defs);
}

#define free_safely(x) if (x) free (x)

static void
free_builtin (builtin)
     BUILTIN_DESC *builtin;
{
  register int i;

  free_safely (builtin->name);
  free_safely (builtin->function);
  free_safely (builtin->shortdoc);
  free_safely (builtin->docname);

  if (builtin->longdoc)
    array_free (builtin->longdoc);

  if (builtin->dependencies)
    {
      for (i = 0; builtin->dependencies->array[i]; i++)
	free (builtin->dependencies->array[i]);
      array_free (builtin->dependencies);
    }
}

/* Free all of the memory allocated to a DEF_FILE. */
void
free_defs (defs)
     DEF_FILE *defs;
{
  register int i;
  register BUILTIN_DESC *builtin;

  if (defs->production)
    free (defs->production);

  if (defs->lines)
    array_free (defs->lines);

  if (defs->builtins)
    {
      for (i = 0; builtin = (BUILTIN_DESC *)defs->builtins->array[i]; i++)
        {
	  free_builtin (builtin);
	  free (builtin);
        }
      array_free (defs->builtins);
    }
  free (defs);
}

/* **************************************************************** */
/*								    */
/*		     The Handler Functions Themselves		    */
/*								    */
/* **************************************************************** */

/* Strip surrounding whitespace from STRING, and
   return a pointer to the start of it. */
char *
strip_whitespace (string)
     char *string;
{
  while (whitespace (*string))
      string++;

  remove_trailing_whitespace (string);
  return (string);
}

/* Remove only the trailing whitespace from STRING. */
void
remove_trailing_whitespace (string)
     char *string;
{
  register int i;

  i = strlen (string) - 1;

  while (i > 0 && whitespace (string[i]))
    i--;

  string[++i] = '\0';
}

/* Ensure that there is a argument in STRING and return it.
   FOR_WHOM is the name of the directive which needs the argument.
   DEFS is the DEF_FILE in which the directive is found.
   If there is no argument, produce an error. */
char *
get_arg (for_whom, defs, string)
     char *for_whom, *string;
     DEF_FILE *defs;
{
  char *new;

  new = strip_whitespace (string);

  if (!*new)
    line_error (defs, "%s requires an argument", for_whom);

  return (savestring (new));
}

/* Error if not building a builtin. */
void
must_be_building (directive, defs)
     char *directive;
     DEF_FILE *defs;
{
  if (!building_builtin)
    line_error (defs, "%s must be inside of a $BUILTIN block", directive);
}

/* Return the current builtin. */
BUILTIN_DESC *
current_builtin (directive, defs)
     char *directive;
     DEF_FILE *defs;
{
  must_be_building (directive, defs);
  return ((BUILTIN_DESC *)defs->builtins->array[defs->builtins->sindex - 1]);
}

/* Add LINE to the long documentation for the current builtin.
   Ignore blank lines until the first non-blank line has been seen. */
void
add_documentation (defs, line)
     DEF_FILE *defs;
     char *line;
{
  register BUILTIN_DESC *builtin;

  builtin = current_builtin ("(implied LONGDOC)", defs);

  remove_trailing_whitespace (line);

  if (!*line && !builtin->longdoc)
    return;

  if (!builtin->longdoc)
    builtin->longdoc = array_create (sizeof (char *));

  array_add (line, builtin->longdoc);
}

/* How to handle the $BUILTIN directive. */
int
builtin_handler (self, defs, arg)
     char *self, *arg;
     DEF_FILE *defs;
{
  BUILTIN_DESC *new;
  char *name;

  /* If we are already building a builtin, we cannot start a new one. */
  if (building_builtin)
    {
      line_error (defs, "%s found before $END", self);
      return (-1);
    }

  output_cpp_line_info++;

  /* Get the name of this builtin, and stick it in the array. */
  name = get_arg (self, defs, arg);

  /* If this is the first builtin, create the array to hold them. */
  if (!defs->builtins)
    defs->builtins = array_create (sizeof (BUILTIN_DESC *));

  new = (BUILTIN_DESC *)xmalloc (sizeof (BUILTIN_DESC));
  new->name = name;
  new->function = (char *)NULL;
  new->shortdoc = (char *)NULL;
  new->docname = (char *)NULL;
  new->longdoc = (ARRAY *)NULL;
  new->dependencies = (ARRAY *)NULL;
  new->flags = 0;

  if (is_special_builtin (name))
    new->flags |= BUILTIN_FLAG_SPECIAL;
  if (is_assignment_builtin (name))
    new->flags |= BUILTIN_FLAG_ASSIGNMENT;

  array_add ((char *)new, defs->builtins);
  building_builtin = 1;

  return (0);
}

/* How to handle the $FUNCTION directive. */
int
function_handler (self, defs, arg)
     char *self, *arg;
     DEF_FILE *defs;
{
  register BUILTIN_DESC *builtin;

  builtin = current_builtin (self, defs);

  if (builtin->function)
    line_error (defs, "%s already has a function (%s)",
		builtin->name, builtin->function);
  else
    builtin->function = get_arg (self, defs, arg);

  return (0);
}

/* How to handle the $DOCNAME directive. */
int
docname_handler (self, defs, arg)
     char *self, *arg;
     DEF_FILE *defs;
{
  register BUILTIN_DESC *builtin;

  builtin = current_builtin (self, defs);

  if (builtin->docname)
    line_error (defs, "%s already had a docname (%s)",
		builtin->name, builtin->docname);
  else
    builtin->docname = get_arg (self, defs, arg);

  return (0);
}

/* How to handle the $SHORT_DOC directive. */
int
short_doc_handler (self, defs, arg)
     char *self, *arg;
     DEF_FILE *defs;
{
  register BUILTIN_DESC *builtin;

  builtin = current_builtin (self, defs);

  if (builtin->shortdoc)
    line_error (defs, "%s already has short documentation (%s)",
		builtin->name, builtin->shortdoc);
  else
    builtin->shortdoc = get_arg (self, defs, arg);

  return (0);
}

/* How to handle the $COMMENT directive. */
int
comment_handler (self, defs)
     char *self;
     DEF_FILE *defs;
{
  return (0);
}

/* How to handle the $DEPENDS_ON directive. */
int
depends_on_handler (self, defs, arg)
     char *self, *arg;
     DEF_FILE *defs;
{
  register BUILTIN_DESC *builtin;
  char *dependent;

  builtin = current_builtin (self, defs);
  dependent = get_arg (self, defs, arg);

  if (!builtin->dependencies)
    builtin->dependencies = array_create (sizeof (char *));

  array_add (dependent, builtin->dependencies);

  return (0);
}

/* How to handle the $PRODUCES directive. */
int
produces_handler (self, defs, arg)
     char *self, *arg;
     DEF_FILE *defs;
{
  /* If just hacking documentation, don't change any of the production
     files. */
  if (only_documentation)
    return (0);

  output_cpp_line_info++;

  if (defs->production)
    line_error (defs, "%s already has a %s definition", defs->filename, self);
  else
    {
      defs->production = get_arg (self, defs, arg);

      if (inhibit_production)
	return (0);

      defs->output = fopen (defs->production, "w");

      if (!defs->output)
	file_error (defs->production);

      fprintf (defs->output, "/* %s, created from %s. */\n",
	       defs->production, defs->filename);
    }
  return (0);
}

/* How to handle the $END directive. */
int
end_handler (self, defs, arg)
     char *self, *arg;
     DEF_FILE *defs;
{
  must_be_building (self, defs);
  building_builtin = 0;
  return (0);
}

/* **************************************************************** */
/*								    */
/*		    Error Handling Functions			    */
/*								    */
/* **************************************************************** */

/* Produce an error for DEFS with FORMAT and ARGS. */
void
line_error (defs, format, arg1, arg2)
     DEF_FILE *defs;
     char *format, *arg1, *arg2;
{
  if (defs->filename[0] != '/')
    fprintf (stderr, "%s", error_directory ? error_directory : "./");
  fprintf (stderr, "%s:%d:", defs->filename, defs->line_number + 1);
  fprintf (stderr, format, arg1, arg2);
  fprintf (stderr, "\n");
  fflush (stderr);
}

/* Print error message for FILENAME. */
void
file_error (filename)
     char *filename;
{
  perror (filename);
  exit (2);
}

/* **************************************************************** */
/*								    */
/*			xmalloc and xrealloc ()		     	    */
/*								    */
/* **************************************************************** */

static void memory_error_and_abort ();

static char *
xmalloc (bytes)
     int bytes;
{
  char *temp = (char *)malloc (bytes);

  if (!temp)
    memory_error_and_abort ();
  return (temp);
}

//static char *
//xrealloc (pointer, bytes)
//     char *pointer;
//     int bytes;
//{
//  char *temp;
//
//  if (!pointer)
//    temp = (char *)malloc (bytes);
//  else
//    temp = (char *)realloc (pointer, bytes);
//
//  if (!temp)
//    memory_error_and_abort ();
//
//  return (temp);
//}

static void
memory_error_and_abort ()
{
  fprintf (stderr, "mkbuiltins: out of virtual memory\n");
  abort ();
}

/* **************************************************************** */
/*								    */
/*		  Creating the Struct and Extern Files		    */
/*								    */
/* **************************************************************** */

/* Return a pointer to a newly allocated builtin which is
   an exact copy of BUILTIN. */
BUILTIN_DESC *
copy_builtin (builtin)
     BUILTIN_DESC *builtin;
{
  BUILTIN_DESC *new;

  new = (BUILTIN_DESC *)xmalloc (sizeof (BUILTIN_DESC));

  new->name         = savestring (builtin->name);
  new->shortdoc     = savestring (builtin->shortdoc);
  new->longdoc      = copy_string_array (builtin->longdoc);
  new->dependencies = copy_string_array (builtin->dependencies);

  new->function =
    builtin->function ? savestring (builtin->function) : (char *)NULL;
  new->docname =
    builtin->docname  ? savestring (builtin->docname)  : (char *)NULL;

  return (new);
}

/* How to save away a builtin. */
void
save_builtin (builtin)
     BUILTIN_DESC *builtin;
{
  BUILTIN_DESC *newbuiltin;

  newbuiltin = copy_builtin (builtin);

  /* If this is the first builtin to be saved, create the array
     to hold it. */
  if (!saved_builtins)
      saved_builtins = array_create (sizeof (BUILTIN_DESC *));

  array_add ((char *)newbuiltin, saved_builtins);
}

/* Flags that mean something to write_documentation (). */
#define STRING_ARRAY 1
#define TEXINFO 2

char *structfile_header[] = {
  "/* builtins.c -- the built in shell commands. */",
  "",
  "/* This file is manufactured by ./mkbuiltins, and should not be",
  "   edited by hand.  See the source to mkbuiltins for details. */",
  "",
  "/* Copyright (C) 1987, 1991, 1992 Free Software Foundation, Inc.",
  "",
  "   This file is part of GNU Bash, the Bourne Again SHell.",
  "",
  "   Bash is free software; you can redistribute it and/or modify it",
  "   under the terms of the GNU General Public License as published by",
  "   the Free Software Foundation; either version 1, or (at your option)",
  "   any later version.",
  "",
  "   Bash is distributed in the hope that it will be useful, but WITHOUT",
  "   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY",
  "   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public",
  "   License for more details.",
  "",
  "   You should have received a copy of the GNU General Public License",
  "   along with Bash; see the file COPYING.  If not, write to the Free",
  "   Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA. */",
  "",
  "/* The list of shell builtins.  Each element is name, function, flags,",
  "   long-doc, short-doc.  The long-doc field contains a pointer to an array",
  "   of help lines.  The function takes a WORD_LIST *; the first word in the",
  "   list is the first arg to the command.  The list has already had word",
  "   expansion performed.",
  "",
  "   Functions which need to look at only the simple commands (e.g.",
  "   the enable_builtin ()), should ignore entries where",
  "   (array[i].function == (Function *)NULL).  Such entries are for",
  "   the list of shell reserved control structures, like `if' and `while'.",
  "   The end of the list is denoted with a NULL name field. */",
  "",
//  "#include \"../builtins.h\"",
  (char *)NULL
  };

char *structfile_footer[] = {
  "  { (char *)0x0, (Function *)0x0, 0, (char **)0x0, (char *)0x0 }",
  "};",
  "",
  "struct builtin *shell_builtins = static_shell_builtins;",
  "struct builtin *current_builtin;",
  "",
  "int num_shell_builtins =",
  "\tsizeof (static_shell_builtins) / sizeof (struct builtin) - 1;",
  (char *)NULL
};

/* Write out any neccessary opening information for
   STRUCTFILE and EXTERNFILE. */
void
write_file_headers (structfile, externfile)
     FILE *structfile, *externfile;
{
  register int i;

  if (structfile)
    {
      for (i = 0; structfile_header[i]; i++)
	fprintf (structfile, "%s\n", structfile_header[i]);

//      fprintf (structfile, "#include \"%s\"\n",
//	       extern_filename ? extern_filename : "builtext.h");
      fprintf (structfile, "\nstruct builtin static_shell_builtins[] = {\n");
    }

  if (externfile)
    fprintf (externfile,
	     "/* %s - The list of builtins found in libbuiltins.a. */\n",
	     extern_filename ? extern_filename : "builtext.h");
}

/* Write out any necessary closing information for
   STRUCTFILE and EXTERNFILE. */
void
write_file_footers (structfile, externfile)
     FILE *structfile, *externfile;
{
  register int i;

  /* Write out the footers. */
  if (structfile)
    {
      for (i = 0; structfile_footer[i]; i++)
	fprintf (structfile, "%s\n", structfile_footer[i]);
    }
}

/* Write out the information accumulated in DEFS to
   STRUCTFILE and EXTERNFILE. */
void
write_builtins (defs, structfile, externfile)
     DEF_FILE *defs;
     FILE *structfile, *externfile;
{
  register int i;

  /* Write out the information. */
  if (defs->builtins)
    {
      register BUILTIN_DESC *builtin;

      for (i = 0; i < defs->builtins->sindex; i++)
	{
	  builtin = (BUILTIN_DESC *)defs->builtins->array[i];

	  /* Write out any #ifdefs that may be there. */
	  if (!only_documentation)
	    {
	      if (builtin->dependencies)
		{
		  write_ifdefs (externfile, builtin->dependencies->array);
		  write_ifdefs (structfile, builtin->dependencies->array);
		}

	      /* Write the extern definition. */
	      if (externfile)
		{
		  if (builtin->function)
		    fprintf (externfile, "extern int %s ();\n",
			     builtin->function);

		  fprintf (externfile, "extern char *%s_doc[];\n",
			   builtin->docname ?builtin->docname : builtin->name);
		}

	      /* Write the structure definition. */
	      if (structfile)
		{
		  fprintf (structfile, "  { \"%s\", ", builtin->name);

		  if (builtin->function)
		    fprintf (structfile, "%s, ", builtin->function);
		  else
		    fprintf (structfile, "(Function *)0x0, ");

		  fprintf (structfile, "%s%s%s, %s_doc,\n",
		    "BUILTIN_ENABLED | STATIC_BUILTIN",
		    (builtin->flags & BUILTIN_FLAG_SPECIAL) ? " | SPECIAL_BUILTIN" : "",
		    (builtin->flags & BUILTIN_FLAG_ASSIGNMENT) ? " | ASSIGNMENT_BUILTIN" : "",
		    builtin->docname ? builtin->docname : builtin->name);

		  fprintf
		    (structfile, "     \"%s\", (char *)NULL },\n",
		     builtin->shortdoc ? builtin->shortdoc : builtin->name);

		  /* Save away this builtin for later writing of the
		     long documentation strings. */
		  save_builtin (builtin);
		}

	      /* Write out the matching #endif, if neccessary. */
	      if (builtin->dependencies)
		{
		  if (externfile)
		    write_endifs (externfile, builtin->dependencies->array);

		  if (structfile)
		    write_endifs (structfile, builtin->dependencies->array);
		}
	    }

	  if (documentation_file)
	    {
	      fprintf (documentation_file, "@item %s\n", builtin->name);
	      write_documentation
		(documentation_file, builtin->longdoc->array, 0, TEXINFO);
	    }
	}
    }
}

/* Write out the long documentation strings in BUILTINS to STREAM. */
void
write_longdocs (stream, builtins)
     FILE *stream;
     ARRAY *builtins;
{
  register int i;
  register BUILTIN_DESC *builtin;

  for (i = 0; i < builtins->sindex; i++)
    {
      builtin = (BUILTIN_DESC *)builtins->array[i];

      if (builtin->dependencies)
	write_ifdefs (stream, builtin->dependencies->array);

      /* Write the long documentation strings. */
      fprintf (stream, "char *%s_doc[] =",
	       builtin->docname ? builtin->docname : builtin->name);
      write_documentation (stream, builtin->longdoc->array, 0, STRING_ARRAY);

      if (builtin->dependencies)
	write_endifs (stream, builtin->dependencies->array);

    }
}

/* Write an #ifdef string saying what needs to be defined (or not defined)
   in order to allow compilation of the code that will follow.
   STREAM is the stream to write the information to,
   DEFINES is a null terminated array of define names.
   If a define is preceded by an `!', then the sense of the test is
   reversed. */
void
write_ifdefs (stream, defines)
     FILE *stream;
     char **defines;
{
  register int i;

  if (!stream)
    return;

  fprintf (stream, "#if ");

  for (i = 0; defines[i]; i++)
    {
      char *def = defines[i];

      if (*def == '!')
	fprintf (stream, "!defined (%s)", def + 1);
      else
	fprintf (stream, "defined (%s)", def);

      if (defines[i + 1])
	fprintf (stream, " && ");
    }
  fprintf (stream, "\n");
}

/* Write an #endif string saying what defines controlled the compilation
   of the immediately preceding code.
   STREAM is the stream to write the information to.
   DEFINES is a null terminated array of define names. */
void
write_endifs (stream, defines)
     FILE *stream;
     char **defines;
{
  register int i;

  if (!stream)
    return;

  fprintf (stream, "#endif /* ");

  for (i = 0; defines[i]; i++)
    {
      fprintf (stream, "%s", defines[i]);

      if (defines[i + 1])
	fprintf (stream, " && ");
    }

  fprintf (stream, " */\n");
}

/* Write DOCUMENTAION to STREAM, perhaps surrounding it with double-quotes
   and quoting special characters in the string. */
void
write_documentation (stream, documentation, indentation, flags)
     FILE *stream;
     char **documentation;
     int indentation, flags;
{
  register int i, j;
  register char *line;
  int string_array, texinfo;

  if (!stream)
    return;

  string_array = flags & STRING_ARRAY;
  if (string_array)
    fprintf (stream, " {\n#if defined (HELP_BUILTIN)\n");

#if !defined (OLDCODE)
  /* XXX -- clean me up; for experiment only */
  if (no_long_document)
    goto end_of_document;
#endif /* !OLDCODE */

  for (i = 0, texinfo = (flags & TEXINFO); line = documentation[i]; i++)
    {
      /* Allow #ifdef's to be written out verbatim. */
      if (*line == '#')
	{
	  if (string_array)
	    fprintf (stream, "%s\n", line);
	  continue;
	}

      if (string_array)
	fprintf (stream, "  \"");

      if (indentation)
	for (j = 0; j < indentation; j++)
	  fprintf (stream, " ");

      if (string_array)
	{
	  for (j = 0; line[j]; j++)
	    {
	      switch (line[j])
		{
		case '\\':
		case '"':
		  fprintf (stream, "\\%c", line[j]);
		  break;

		default:
		  fprintf (stream, "%c", line[j]);
		}
	    }

	  fprintf (stream, "\",\n");
	}
      else if (texinfo)
	{
	  for (j = 0; line[j]; j++)
	    {
	      switch (line[j])
		{
		case '@':
		case '{':
		case '}':
		  fprintf (stream, "@%c", line[j]);
		  break;

		default:
		  fprintf (stream, "%c", line[j]);
		}
	    }
	  fprintf (stream, "\n");
	}
      else
	fprintf (stream, "%s\n", line);
    }

#if !defined (OLDCODE)
end_of_document:
#endif /* !OLDCODE */

  if (string_array)
    fprintf (stream, "#endif /* HELP_BUILTIN */\n  (char *)NULL\n};\n");
}

static int
_find_in_table (name, name_table)
     char *name, *name_table[];
{
  register int i;

  for (i = 0; name_table[i]; i++)
    if (strcmp (name, name_table[i]) == 0)
      return 1;
  return 0;
}

static int
is_special_builtin (name)
     char *name;
{
  return (_find_in_table (name, special_builtins));
}

static int
is_assignment_builtin (name)
     char *name;
{
  return (_find_in_table (name, assignment_builtins));
}
