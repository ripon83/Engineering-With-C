/*
 * Program 12.162: Find out the error - Example 12
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    int x:3;
}Demo;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Demo d;
    int *p=&d.x;

    printf("%d\n", *p);
    return 0;
}
