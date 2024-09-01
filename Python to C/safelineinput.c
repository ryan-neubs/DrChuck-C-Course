#include <stdio.h>
/* Reads and writes/echos line given by user */
int main() {
    char line[1000];
    printf("Enter line\n");
    fgets(line, 1000, stdin); /* Read line up to 1000 characters from standard input. stdin - read to EOF (end of file), I assume i'll learn more about this later */
    printf("Line: %s\n", line);
}