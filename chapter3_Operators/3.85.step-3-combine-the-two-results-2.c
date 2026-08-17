/*
 * Program: Step 3 Combine The Two Results 2
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int n = 0x9ab;

    n = (n << 16) | (n >> 16);

    printf("%x\n", n);  // Display output
    return 0;  // Indicate successful program termination
}
