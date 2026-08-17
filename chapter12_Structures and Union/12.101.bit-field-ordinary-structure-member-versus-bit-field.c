/*
 * Program 12.101: Bit-field - Ordinary structure member versus bit-field
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct Demo
{
    int x;
} demo;

void foo(int *x)
{
    *x = 7;
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    demo d;

    foo(&d.x);

    printf("%d", d.x);

    return 0;
}
