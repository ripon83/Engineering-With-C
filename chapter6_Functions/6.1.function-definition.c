/*
 * Program: Function Definition
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int foo(int, double);      // Function declaration

int main()  // Main function: execution starts here
{
    foo(10, 3.5);          // Function call
    return 0;  // Indicate successful program termination
}

int foo(int m, double n)   // Function definition
{
    return (int)(m+n);
}
