/*
 * Program: Difference Between Foo Void 4
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void foo()
{
    printf("Inside the foo function!");  // Display output
}

int main()  // Main function: execution starts here
{
    foo(5, 6);
    return 0;  // Indicate successful program termination
}
