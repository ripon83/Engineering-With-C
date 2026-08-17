/*
 * Program 12.84: Static in structure - Static structure and post-increment - Example 2
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    int x;
} demo;

int foo()
{
    static demo d={0};
    return d.x++;
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("%d\t", foo());
    printf("%d\t", foo());
    printf("%d\t", foo());
    printf("%d\n", foo());
    return 0;
}
