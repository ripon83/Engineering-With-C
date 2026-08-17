/*
 * Program 12.28: Packing - Packing using packed
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct demo
{
    char x;
    int y;
    long z;
} __attribute__((packed));

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("Memory: %zu bytes", sizeof(struct demo));
    return 0;
}
