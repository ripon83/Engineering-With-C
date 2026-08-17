/*
 * Program: Macro Example 5
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

#define rotLeft(n, r) \  // Define a macro
    ((n << r) | (n >> (32-r)))

int main()  // Main function: program execution starts here
{
    unsigned int n = 1073741825;
    unsigned int r = 5;

    unsigned int left = rotLeft(n, r);

    printf("Left rotation: %u\n", left);  // Display output

    return 0;  // Indicate successful program termination
}
