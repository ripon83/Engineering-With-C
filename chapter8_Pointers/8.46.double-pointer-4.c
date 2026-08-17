/*
 * Program: Double Pointer 4
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x=10;
    int *ptr=&x;
    int *pp=&ptr;       // Error

    printf("%d\n", x);  // Display output

    return 0;  // Indicate successful program termination
}
