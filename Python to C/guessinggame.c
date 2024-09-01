#include <stdio.h>
/* Infinite loop that doesn't break until the user guesses the number correctly */
int main(){
    int guess;
    while(scanf("%d", &guess) != EOF ) {
        if ( guess == 42 ) { /* A block with more than one statement requires curly braces */
            printf("Nice work!\n");
            break; /* Breaks/exits infinite loop */
        }
        else if ( guess < 42 ) /* else if doesn't have curly braces because it is a single statement */
            printf("Too low - guess again\n");
        else /* else if doesn't have curly braces because it is a single statement */
            printf("Too high - guess again\n");
    }
}


/* The if else statements are two separate blocks. The indentation makes it appear to be a multiway if */ 