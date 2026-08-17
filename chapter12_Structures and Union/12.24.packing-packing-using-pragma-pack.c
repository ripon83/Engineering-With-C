/*
 * Program 12.24: Packing - Packing using pragma pack
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

#pragma pack(1)

// Define a structure used by the program.
struct student
{
    char sec;
    int reg_no;
} s;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("Memory: %zu bytes", sizeof(s));
    return 0;
}
