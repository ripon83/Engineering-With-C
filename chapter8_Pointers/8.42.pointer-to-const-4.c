/*
 * Program: Pointer To Const 4
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    const int *const ptr = &x;

    printf("%d\t", *ptr);  // Display output

    *ptr = 20;      // Error
    ptr = &y;       // Error

    return 0;  // Indicate successful program termination
}
