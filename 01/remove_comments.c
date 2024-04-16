#include "myfunctions.h"
#include <stdbool.h>
#include <stdio.h>

/*
 * Remove comments in a program file
 */

void remove_comments() {
    int c;
    int prev;

    while ((c = getchar()) != EOF) {
        if (c == '/' && prev == '/') {
            while ((c = getchar()) != '\n') {
                // if we haven't reached a new line then still comment line
            }
        } else {
            printf("%c", c);
        }
        prev = c;
    }
}

bool is_white_space(int c) {
    if (c == ' ' || c == '\t' || c == '\n') {
        return true;
    }
    return false;
}
