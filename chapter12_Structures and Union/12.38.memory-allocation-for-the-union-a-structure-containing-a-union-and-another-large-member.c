/*
 * Program 12.38: Memory allocation for the union - A structure containing a union and another large member
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
    short z;
};

// Define a structure used by the program.
struct s_demo
{
    long w;
    union u_demo u;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct s_demo d;

    printf("Memory: %zu bytes", sizeof(d));

    return 0;
}
