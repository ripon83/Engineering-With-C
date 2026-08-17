/*
 * Program: Returning The Value Instead Of The Address
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int foo()
{
    int x=10;
    return x;
}

int main()  // Main function: execution starts here
{
    int n=foo();
    printf("%d", n);  // Display output
    return 0;  // Indicate successful program termination
}
