/*
 * Program: Bitwise Operators 33
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m = 28, k = 3;
    int bit = (m >> k) & 1;

    printf("Bit %d = %d\n", k, bit);  // Display output
    return 0;  // Indicate successful program termination
}
