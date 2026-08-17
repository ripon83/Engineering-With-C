/*
 * Program: Macro Example 9
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

#define swap16(n) \  // Define a macro
    ((n << 16) | (n >> 16))

int main()  // Main function: program execution starts here
{
    unsigned int n = 0x9ab;

    n = swap16(n);

    printf("%x\n", n);  // Display output
    return 0;  // Indicate successful program termination
}
