#include <stdio.h>

int is_white_space(char c) {
  if (c == ' ' || c == '\t' || c == '\n') {
    return 1;
  }
  return 0;
}

/*
 * Histogram counter of words *
 */
int main() {
  int is_new_word = 0;
  int counter = 0;
  char c;
  int arr[10];

  while ((c = getchar()) != EOF) {
    if (counter == 0 && is_white_space(c) != 1) {
      is_new_word = 1;
      ++counter;
    } else if (is_white_space(c) == 1) {
      arr[counter]++;
      counter = 0;
    }
  }

  for (int i = 0; i < 10; ++i) {
    int total = arr[i];

    printf("%d ", i);
    for (int j = 0; j < total; ++j) {
      printf("*");
    }

    printf("\n");
  }
  printf("\n");
}
