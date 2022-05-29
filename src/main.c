/*
 * hello world
 */


#include <config.h>
#include <stdio.h>
#ifdef STDC_HEADERS
# include <stdlib.h>
# include <stddef.h>
#else
# ifdef HAVE_STDLIB_H
#  include <stdlib.h>
# endif
#endif

int main(int argc, char *argv[]) {
  printf("Hello World!\n");
  printf("This is %s.\n", PACKAGE_STRING);

  return 0;
}
