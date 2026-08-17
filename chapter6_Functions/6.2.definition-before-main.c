/*
 * Program: Definition Before Main
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int foo(int m, double n)
{
    return (int)(m+n);
}

int main()  // Main function: execution starts here
{
    foo(10, 3.5);
    return 0;  // Indicate successful program termination
}
