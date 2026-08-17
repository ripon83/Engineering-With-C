/*
 * Program: Passing A Pointer To A Function
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

void foo(int *p)
{
    *p = 100;
}

int main()  // Main function: execution starts here
{
    int x = 10;
    int *ptr = &x;

    foo(ptr);

    printf("%d\n", x);  // Display output

    return 0;  // Indicate successful program termination
}
