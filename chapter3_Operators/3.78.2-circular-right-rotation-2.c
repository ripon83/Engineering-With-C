/*
 * Program: 2 Circular Right Rotation 2
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int m = 0x9b;
    unsigned int n =
        ((m & 0x0f) << 4) |
        ((m & 0xf0) >> 4);

    printf("Original: 0x%x\n", m);  // Display output
    printf("Swapped : 0x%x\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
