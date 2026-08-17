/*
 * Program 12.83: Static in structure - Static structure and post-increment
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

int foo()
{
    static demo d={0};
    return d.x++;
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("%d\t%d\t%d\t%d\n", foo(), foo(), foo(), foo());
    return 0;
}
