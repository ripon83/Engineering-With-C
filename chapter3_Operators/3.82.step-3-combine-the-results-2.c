/*
 * Program: Step 3 Combine The Results 2
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int n = 0x9ab;

    n = ((n & 0xF0F0F0F0u) >> 4) |
        ((n & 0x0F0F0F0Fu) << 4);

    printf("%x\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
