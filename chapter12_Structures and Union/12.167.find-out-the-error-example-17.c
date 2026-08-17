/*
 * Program 12.167: Find out the error - Example 17
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    int x;
}Demo;

void foo(Demo *d)
{
    d.x=20;
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d={10};
    foo(&d);

    printf("%d\n", d.x);
    return 0;
}
