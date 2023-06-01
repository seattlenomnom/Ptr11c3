/* ptr11c3.c
 * C file for ptr11c3 an example program for Kochan, Stephen, "Programming
 * in C 3rd Ed."
 * "contents of a pointer used in a calculation"
 *
*/

#include <stdio.h>

int main(void) {
    int i1, i2;
    int *p1, *p2;

    i1 = 5;
    p1 = &i1;
    i2 = *p1 / 2 + 10;
    p2 = p1;

    printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n", i1, i2, *p1, *p2);

    printf("This is the end of the program\n");

    return(0);
}
