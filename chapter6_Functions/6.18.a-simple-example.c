/*
 * Program: A Simple Example
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void foo(int n, ...)
{
    printf("%d\n", n);  // Display output
}

int main()  // Main function: execution starts here
{
    foo(1,2,3,4,5,6);
    foo(6,3,4,5);
    foo(5);

    return 0;  // Indicate successful program termination
}
