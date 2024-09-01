#include <stdio.h>
/* Takes line of input (reads), echos the line (writes) */
int main() {
    char line[1000]; /* 1000 character string */
    printf("Enter line\n");
    scanf("%[^\n]1000s", line); /* Regex says to read any character that isn't a new line. 1000 means until you hit 1000 chars. */
    printf("Line: %s\n", line);
}