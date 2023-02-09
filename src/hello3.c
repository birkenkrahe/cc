

/* - It is the job of the /compiler/, ~gcc~, which acts behind the scenes as */
/*   it were, to resolve issues like "missing ~int~" or "missing ~return~" */

/* - If you /tangle/ the code block and compile the source file ~hello2.c~ in */
/*   a shell, you get a warning: */
/*   #+begin_example sh */
/*     $ gcc hello2.c */
/*       hello2.c:2:1: warning: return type defaults to 'int' [-Wimplicit-int] */
/*       main() */
/*       ^~~~ */
/*   #+end_example */

/* * Hello World Version 3 (long) */

/* The program could also have been written more complicated: */
/* - ~int argc~ is an integer, or single number - the number of arguments */
/*   that were passed to ~main~ */
/* - ~char **argv~ (or ~char *argv[]~) is a /pointer/ that refers to an /array/ */
/*   of characters - a more complicated data structure */

/* #+NAME: hello3 */

/* [[file:../org/3_hello.org::hello3][hello3]] */
#include <stdio.h>

int main(int argc, char **argv)
{
  printf("hello world\n");
  return 0;
}
/* hello3 ends here */
