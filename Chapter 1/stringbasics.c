#include <stdio.h>
/* I am a comment */
int main() { /* Function definition */
    printf("Hellow world\n"); /* Printing out a character array not a string. Need \n to print on next line */
    printf("Answer %d\n", 42); /* %d means there is an integer following */
    printf("Name %s\n", "Sarah"); /* %s means there is a character array to follow (a string indicator) */
    printf("x %.1f i %d\n", 3.5, 100); /* %.1f corresponds to the 3.5 floating point integer. .1 means 1 digit of precision (tenths place) */
}