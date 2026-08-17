/*
 * Program: Bitwise Operators 22
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m = 2147483647;
    int n = 2147483600;

    printf("Before: m=%d\tn=%d\n", m, n);  // Display output

    m = m * n;
    n = m / n;
    m = m / n;

    printf("After:  m=%d\tn=%d\n", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
