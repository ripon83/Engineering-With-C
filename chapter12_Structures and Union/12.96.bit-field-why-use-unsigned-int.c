/*
 * Program 12.96: Bit-field - Why use unsigned int
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct Flag
{
    int is_valid : 1;
    int is_active : 1;
} flag;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    flag f;

    f.is_valid = 1;
    f.is_active = 0;

    printf("%d\t%d", f.is_valid, f.is_active);

    return 0;
}
