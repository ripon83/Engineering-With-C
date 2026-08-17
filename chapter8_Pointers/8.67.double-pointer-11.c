/*
 * Program: Double Pointer 11
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

void foo(int **pp)
{
    printf("Inside function: **pp=%d\n", **pp);  // Display output

    int x = 100;

    *pp = &x;

    printf("Inside function: x=%d\t**pp=%d\n", x, **pp);  // Display output
}

int main()  // Main function: execution starts here
{
    int m = 10;
    int *ptr = &m;

    printf("Inside main: m=%d\t*ptr=%d\n", m, *ptr);  // Display output

    foo(&ptr);

    printf("After function call: m=%d\t*ptr=%d\n", m, *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
