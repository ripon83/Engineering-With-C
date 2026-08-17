/*
 * Program: Why Are Parentheses Important
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    int *ptr = &x;

    *ptr++;

    printf("%d", x);  // Display output

    return 0;  // Indicate successful program termination
}
