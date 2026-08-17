/*
 * Program 12.82: Static in structure - Non-static structure object
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
// Define a structure used by the program.
struct demo 
{
    int x;
};

void foo()
{
    struct demo d={0};
    d.x++;
    printf("%d\n", d.x);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    foo();
    foo();
    foo();
    foo();
    return 0;
}
