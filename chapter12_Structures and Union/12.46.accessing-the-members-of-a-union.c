/*
 * Program 12.46: Accessing the members of a union
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union demo
{
    int x;
    int y;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union demo d;

    d.x = 10;
    printf("x=%d\ty=%d\n", d.x, d.y);

    d.y = 20;
    printf("x=%d\ty=%d\n", d.x, d.y);

    return 0;
}
