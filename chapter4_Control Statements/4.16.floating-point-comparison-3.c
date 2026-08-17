/*
 * Program: Floating Point Comparison 3
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int n = 16;

    if (n && ((n & (n - 1)) == 0))  // Test the specified condition
        printf("%u is a power of 2\n", n);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("%u is not a power of 2\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
