/*
 * Program 12.95: Bit-field - One-bit bit-field
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct Flag
{
    unsigned int is_valid : 1;
    unsigned int is_active : 1;
} flag;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    flag f;

    f.is_active = 0;
    f.is_valid = 1;

    printf("%d\t%d", f.is_valid, f.is_active);

    return 0;
}
