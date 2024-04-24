#include <limits.h>
#include <stdio.h>

int main() {
  unsigned long example = -1;
  printf("The min and max sizes of int on mac os: %d %d\n", INT_MIN, INT_MAX);
  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("%zu", example);
}
