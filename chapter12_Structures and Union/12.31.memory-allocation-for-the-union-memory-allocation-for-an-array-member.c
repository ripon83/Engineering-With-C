/*
 * Program 12.31: Memory allocation for the union - Memory allocation for an array member
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union demo
{
    char name[10];
    int age;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union demo d;

    printf("Memory: %zu bytes", sizeof(d));

    return 0;
}
