/*
 * Program: Pointer Subtraction With Arrays
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = &a[1];
    int *q = &a[4];

    printf("%td", q - p);  // Display output

    return 0;  // Indicate successful program termination
}
