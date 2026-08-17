/*
 * Program 12.169: Find out the error - Example 19
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
    scanf("%d", &d.x);

    return 0;
}
