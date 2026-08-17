/*
 * Program 12.154: Find out the error - Example 4
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
typedef union
{
    int x, y;
}Demo;

// The main function is the entry point of the program.
int main() 
{
    // Execute the statements of the program.
    Demo d={4, 5};
    printf("%d\n", d.x);
    return 0;
}
