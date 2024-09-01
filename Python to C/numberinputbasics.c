#include <stdio.h>
/* US Floor to EU Floor*/
int main() {
    int usf, euf; /* Type declaration of 2 int variables */
    printf("Enter US Floor\n");
    scanf("%d", &usf); /* Comes from stdio.h. Reads until non digit is found and identifies it as the number. Sets usf to that num */
                        /* C is giving the address of C. Call by reference, this will be taught in chapter 4 and 5 */
    euf = usf - 1; /* updating euf */
    printf("EU Floor %d\n", euf) /* %d prints out digit stored in euf */
}