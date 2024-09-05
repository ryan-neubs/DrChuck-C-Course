#include <stdio.h>
/* This code calculates the length of the character array */
int main() {
    char x[] = "Hello";
    int py_len();
    printf("%s %d\n", x, py_len(x));
}

int py_len()
    char self[];
{
    int i;
    for(i=0; self[i]; i++);
    return i;
}