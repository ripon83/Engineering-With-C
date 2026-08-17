/*
 * Program: Bitwise Operators 9
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int n = 10;
    long int p = 1L << n;

    printf("2^%d = %ld\n", n, p);  // Display output

    return 0;  // Indicate successful program termination
}
