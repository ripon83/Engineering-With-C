/*
 * Program 12.34: Memory allocation for the union - Memory allocation for both struct
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union u_demo
{
    char x;
    int y;
    long z;
};

// Define a structure used by the program.
struct s_demo
{
    char ch;
    union u_demo u;
    short t;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct s_demo d;

    printf("Memory: %zu bytes", sizeof(d));

    return 0;
}
