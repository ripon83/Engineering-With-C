/*
 * Program: Inserting A B Bit Number
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int m = 654321;
    unsigned int n = 9;
    int k = 5, b = 4;

    unsigned int mask = ((1U << b) - 1) << k;

    m = (m & ~mask) |
        ((n & ((1U << b) - 1)) << k);

    printf("Result = %u\n", m);  // Display output
    return 0;  // Indicate successful program termination
}
