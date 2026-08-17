/*
 * Program: Step 3 Combine The Two Results
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int n = 0x9ab;

    n = ((n & 0xff00ff00) >> 8) |
        ((n & 0x00ff00ff) << 8);

    printf("%x\n", n);  // Display output
    return 0;  // Indicate successful program termination
}
