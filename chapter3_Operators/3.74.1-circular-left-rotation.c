/*
 * Program: 1 Circular Left Rotation
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int n = 1073741825;
    unsigned int r = 5;

    unsigned int left =
        (n << r) | (n >> (32-r));

    printf("Left rotation: %u\n", left);  // Display output

    return 0;  // Indicate successful program termination
}
