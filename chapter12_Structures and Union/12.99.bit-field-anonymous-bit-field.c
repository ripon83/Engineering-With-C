/*
 * Program 12.99: Bit-field - Anonymous bit-field
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct Flag
{
    unsigned int x : 8;
    unsigned int   : 5;
    unsigned int y : 6;
    unsigned int   : 5;
    unsigned int z : 8;
} flag;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("%ld", sizeof(flag));

    return 0;
}
