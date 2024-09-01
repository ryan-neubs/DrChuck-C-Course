#include <stdio.h>
/* Takes user input of name and sauys hello */
int main() {
    char name[100]; /* Predeclaring char array. Allocating the space for the string. Char array has a fixed length of 100 chars, any further will break */
    printf("Enter name\n");
    scanf("%100s", name); /* %100s tells the scan to only scan up to 100 chars. No ampersand on name because it's an array. This passes the address of the beginning of the array */
    printf("Hello %s\n", name); /* %s, specifying to print string/char array */
}