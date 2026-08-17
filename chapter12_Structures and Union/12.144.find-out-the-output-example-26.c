/*
 * Program 12.144: Find out the output - Example 26
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    int x:3;
    int y:3;
}Demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d;

    d.x=2;
    d.y=3;

    printf("%d\t%d\n", d.x,d.y);
    return 0;
}
