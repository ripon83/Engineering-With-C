/*
 * Program 12.85: Static in structure - Static structure and call-by-value
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a structure used by the program.
typedef struct
{
    int x;
}demo;

int foo(demo p)
{
    return p.x++;
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    static demo d={0};
    printf("%d\t%d\t%d\t%d\n", foo(d), foo(d), foo(d), foo(d));
    return 0;
}
