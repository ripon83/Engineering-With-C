/*
 * Program: Using Typeof To Construct A Generic Size Macro
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x;
    __typeof__(x) y = 20;

    printf("%d", y);  // Display output
    return 0;  // Indicate successful program termination
}
