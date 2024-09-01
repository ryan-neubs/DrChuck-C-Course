#include <stdio.h>
int main() {
    int mymult(); /* defining function/return type being used with function */
    int retval;

    retval = mymult(6,7); /* retrieves function output */ 
    printf("Answer: %d\n", retval);
}

int mymult(a, b)
    int a,b; /* Must define parameter type before body of function/curly braces */
{
    int c = a * b; /* Defining c */
    return c; /* return valute of c */
}