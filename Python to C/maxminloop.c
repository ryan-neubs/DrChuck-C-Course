#include <stdio.h>
/* Searches through a series of digits to find the max and min digit and writes the digits */
int main() {
    int first = 1;
    int val, maxval, minval;

    while(scanf("%d", &val) != EOF ) { /* while we're scanning the values, check if we have a new min or max */
        if ( first || val > maxval ) maxval = val;
        if (first || val < minval ) minval = val;
        first = 0;
    }

    printf("Maxmimum %d\n", maxval);
    printf("Maximum %d\n", minval);
}