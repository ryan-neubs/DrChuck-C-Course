#include <stdio.h>
/* Reads file and writes each line */
int main() {
    char line[1000];
    FILE *hand; /* FILE is a type definition. *hand means it's a pointer to a file object. */
    hand = fopen("romeo.txt", "r"); /* open in python is inspired by fopen from C. This line opens file in read only format */
    while (fgets(line, 1000, hand) != NULL ) { /* Read everything up until end of file. Prints line while doing so */
        printf("%s", line);
    }
}