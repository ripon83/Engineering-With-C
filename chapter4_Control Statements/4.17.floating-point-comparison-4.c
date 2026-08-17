/*
 * Program: Floating Point Comparison 4
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int n = 32;
    int flag = n && !(n & (n - 1));

    if (flag)  // Test the specified condition
        printf("%u is a power of 2\n", n);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("%u is not a power of 2\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
