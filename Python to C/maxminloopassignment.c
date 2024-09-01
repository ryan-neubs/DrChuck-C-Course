#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Assignment version of max min loop */
/* 
Input is:
5
2
9
done
*/
int main() {
    int first = 1;
    int val, maxval, minval;
    char line[1000];

    while(gets(line) != NULL ) { /* Retrieving each line of input, 1 at a time */
        if ( strcmp(line,"done") == 0 ) break; /* If the line input is the word done, then break the loop. strcmp returns the ASCII positive value difference between the chars*/
        val = atoi(line); /* Converts alphanumeric chars to integers */
        if ( first || val > maxval ) maxval = val;
        if ( first || val < minval ) minval = val;
        first = 0;
    }
        
    printf("Maximum %d\n", maxval);
    printf("Minimum %d\n", minval);
}