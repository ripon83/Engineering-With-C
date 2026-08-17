/*
 * Program 12.33: Memory allocation for the union - Union containing an integer array
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a union used by the program.
union demo
{
    int marks[10];
    short age;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    union demo d;

    printf("Memory: %zu bytes", sizeof(d));

    return 0;
}
