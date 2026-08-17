/*
 * Program: Constant Pointer
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    int *const ptr = &x;

    printf("%d\t", *ptr);  // Display output

    *ptr = 20;

    printf("%d", x);  // Display output

    return 0;  // Indicate successful program termination
}
