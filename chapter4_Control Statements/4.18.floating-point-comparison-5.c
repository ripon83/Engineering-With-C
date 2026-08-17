/*
 * Program: Floating Point Comparison 5
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m = 10;
    int n = 10;

    if (!(m ^ n))  // Test the specified condition
        printf("%d is equal to %d\n", m, n);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("%d is not equal to %d\n", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
