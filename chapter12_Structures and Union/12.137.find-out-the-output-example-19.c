/*
 * Program 12.137: Find out the output - Example 19
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

typedef union
{
    int x;
    int y;
}Demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d;
    d.x=10;
    d.y=20;

    printf("%d\t%d\n", d.x, d.y);
    return 0;
}
