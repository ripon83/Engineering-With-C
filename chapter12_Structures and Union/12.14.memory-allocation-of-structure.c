/*
 * Program 12.14: Memory allocation of Structure
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct student
{
    int x;
    int y;
} s;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    printf("Memory: %zu bytes", sizeof(s));
\index{sizeof with structure}
    return 0;
}
