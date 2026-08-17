/*
 * Program 12.98: Bit-field - Another example of signed bit-fields
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct Flag
{
    int is_valid : 3;
    int is_active : 3;
} flag;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    flag f;

    f.is_valid = 6;
    f.is_active = 5;

    printf("%d\t%d", f.is_valid, f.is_active);

    return 0;
}
