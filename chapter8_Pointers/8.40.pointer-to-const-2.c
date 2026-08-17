/*
 * Program: Pointer To Const 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    const int *ptr = &x;

    printf("%d\t", *ptr);  // Display output

    *ptr = 20;      // Error

    printf("%d", *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
