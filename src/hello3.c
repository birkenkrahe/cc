/* Hello World Version 3 */

/* The program could also have been written more complicated: */
/* - ~int argc~ is an integer, or single number - the number of arguments */
/*   that were passed to ~main~ */
/* - ~char **argv~ (or ~char *argv[]~) is a /pointer/ that refers to an array */
/*   of characters - a more complicated data structure. */

/* #+NAME: hello3 */

/* [[file:../org/2_hello.org::hello3][hello3]] */
#include <stdio.h>

int main(int argc, char **argv)
{
  printf("hello world\n");
  return 0;
}
/* hello3 ends here */
