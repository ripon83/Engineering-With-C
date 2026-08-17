/*
 * Program: Pointer To Const 3
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    const int *const ptr = &x;

    printf("%d", *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
