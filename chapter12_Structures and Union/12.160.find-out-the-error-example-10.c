/*
 * Program 12.160: Find out the error - Example 10
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    const int x;
}Demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d={10};
    d.x=20;

    printf("%d\n", d.x);
    return 0;
}
