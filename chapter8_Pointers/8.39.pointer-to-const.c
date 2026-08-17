/*
 * Program: Pointer To Const
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10, y = 20;
    const int *ptr = &x;

    printf("%d\t", *ptr);  // Display output

    ptr = &y;

    printf("%d", *ptr);  // Display output

    return 0;  // Indicate successful program termination
}
