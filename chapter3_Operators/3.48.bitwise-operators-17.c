/*
 * Program: Bitwise Operators 17
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m = 20, n = 7;
    int sub = m + (~n) + 1;

    printf("%d - %d = %d\n", m, n, sub);  // Display output

    return 0;  // Indicate successful program termination
}
