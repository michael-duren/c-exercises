#include "myfunctions.h"
#include <limits.h>
#include <stdio.h>
// #include <stdio.h>

#define TAB_LENGTH 4

// determine the length of char, short, int, and long signed and unsigned

int main() {
  printf("The max value of char is: %d\n", CHAR_MAX);
  printf("The min value of char is: %d\n", CHAR_MIN);
  printf("The max value of int is: %d\n", INT_MAX);
  printf("The min value of int is: %d\n", INT_MIN);
  printf("The max value of short is: %d\n", SHRT_MAX);
  printf("The min value of short is: %d\n", SHRT_MIN);
  printf("The max value of long is: %ld\n", LONG_MAX);
  printf("The min value of long is: %ld\n", LONG_MIN);
}
