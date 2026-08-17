/*
 * Program 12.47: Accessing the members of a union - Accessing union members with different data types
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union demo
{
    int x;
    char y;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union demo d;

    d.x = 65;
    printf("x=%d\ty=%c", d.x, d.y);

    return 0;
}
