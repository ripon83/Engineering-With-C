/*
 * Program: Extracting The B Most Significant Bits
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int m = 65535;
    int b = 12;

    unsigned int n = m >> (32 - b);

    printf("MSB bits = %u\n", n);  // Display output
    return 0;  // Indicate successful program termination
}
