/*
 * Program 12.23: Memory allocation of an array within a structure - Changing the size of the array
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct demo
{
    char x[13];
    int y;
    long z;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("Memory: %zu bytes", sizeof(struct demo));
    return 0;
}
