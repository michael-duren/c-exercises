#include <stdbool.h>
#include <stdio.h>

bool is_white_space(int c);

bool is_white_space(int c) {
  if (c == ' ' || c == '\t' || c == '\n') {
    return true;
  }
  return false;
}

#define ARRAY_LENGTH 100

/*
 * Histogram counter of words *
 */
int main() {
  int counter = 0;
  int c;
  int arr[ARRAY_LENGTH];

  for (int i = 0; i < ARRAY_LENGTH; ++i) {
    arr[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (is_white_space(c)) {
      ++arr[counter];
      counter = 0;
    } else {
      ++counter;
    }
  }

  for (int i = 0; i < ARRAY_LENGTH; ++i) {
    int total = arr[i];

    printf("%d ", i);
    for (int j = 0; j < total; ++j) {
      printf("*");
    }

    printf("\n");
  }
  printf("\n");
}
