/*
 * Program 12.48: Accessing the members of a union - Changing the active member of a union
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union demo
{
    int x;
    float y;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union demo d;

    d.x = 65;
    printf("x=%d\n", d.x);

    d.y = 3.14f;
    printf("y=%f\n", d.y);

    return 0;
}
