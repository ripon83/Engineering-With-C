/*
 * Program 12.43: Memory Allocation for Nested Structures Unions and Arrays - Array of Unions Inside a Structure
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union u_demo
{
    char x[10];
    long y;
};

// Define a structure used by the program.
struct s_demo
{
    char ch;
    union u_demo u[10];
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct s_demo d;
    printf("Memory: %ld", sizeof(d));
    return 0;
}
