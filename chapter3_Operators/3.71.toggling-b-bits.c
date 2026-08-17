/*
 * Program: Toggling B Bits
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int m = 654321;
    int k = 2, b = 4;

    unsigned int mask = ((1U << b) - 1) << k;
    m = m ^ mask;

    printf("Result = %u\n", m);  // Display output
    return 0;  // Indicate successful program termination
}
