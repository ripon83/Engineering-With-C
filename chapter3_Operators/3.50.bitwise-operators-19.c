/*
 * Program: Bitwise Operators 19
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m = 23, n = 3, temp;

    printf("Before: m=%d\tn=%d\n", m, n);  // Display output

    temp = m;
    m = n;
    n = temp;

    printf("After:  m=%d\tn=%d\n", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
