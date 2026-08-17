/*
 * Program 12.40: Memory Allocation for Arrays in Nested Structures and Unions - Array of int
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union u_demo
{
    int x[10];
    char y;
};

// Define a structure used by the program.
struct s_demo
{
    char ch;
    long t;
    union u_demo u;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct s_demo d;
    printf("Memory: %ld", sizeof(d));
    return 0;
}
