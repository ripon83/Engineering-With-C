/*
 * Program 12.151: Find out the error
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a structure used by the program.
typedef struct
{
    int x, y;
}Demo;

Demo *foo()
{
    Demo d={5, 6};
    return &d;
}

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    Demo *d=foo();
    printf("%d\t%d\n", d->x, d->y);
    return 0;
}
