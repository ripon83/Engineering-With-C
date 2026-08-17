/*
 * Program 12.166: Find out the error - Example 16
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

typedef union
{
    int x;
    float y;
}Demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d;
    d.x=10;
    d.y=20.5;

    printf("%d\n", d.x);
    return 0;
}
