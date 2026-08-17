/*
 * Program 12.44: Memory Allocation for Nested Structures Unions and Arrays - Array of Structures Inside a Union
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct s_demo
{
    long x;
    short y[10];
};

// Define a union used by the program.
union u_demo
{
    char ch;
    int t;
    struct s_demo s[10];
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union u_demo d;
    printf("Memory: %ld", sizeof(d));
    return 0;
}
