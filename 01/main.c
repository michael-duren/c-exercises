#include <stdio.h>

#define MAXLINE 1000 /* max input line size */

int get_line(char s[], int lim);

void copy(char to[], const char from[]);

int main() {
    int len;               /* curr line length */
    int max;               /* max length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    printf("Max is equal to %d \n", max);
    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}

/* getline: read a line into s, return length */
int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], const char from[]) {
    int i;

    i = 0;
    // \0 is null in C
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
