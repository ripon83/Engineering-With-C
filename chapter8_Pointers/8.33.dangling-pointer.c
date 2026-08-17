/*
 * Program: Dangling Pointer
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int *foo()
{
    int x=10;
    return &x;
}

int main()  // Main function: execution starts here
{
    int *ptr=foo();
    printf("%d", *ptr);  // Display output
    return 0;  // Indicate successful program termination
}
