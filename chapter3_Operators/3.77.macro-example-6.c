/*
 * Program: Macro Example 6
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

#define rotRight(n, r) \  // Define a macro
    ((n >> r) | (n << (32-r)))

int main()  // Main function: program execution starts here
{
    unsigned int n = 1073741825;
    unsigned int r = 5;

    unsigned int right = rotRight(n, r);

    printf("Right rotation: %u\n", right);  // Display output

    return 0;  // Indicate successful program termination
}
