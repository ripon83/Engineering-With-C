/*
 * Program 12.29: Packing - Packing an array member
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct demo
{
    char x[5];
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
