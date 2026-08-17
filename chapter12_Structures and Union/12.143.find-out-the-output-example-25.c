/*
 * Program 12.143: Find out the output - Example 25
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    unsigned int valid:1;
    unsigned int active:1;
}Flag;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Flag f;

    f.valid=1;
    f.active=0;

    printf("%d\t%d\n", f.valid, f.active);
    return 0;
}
