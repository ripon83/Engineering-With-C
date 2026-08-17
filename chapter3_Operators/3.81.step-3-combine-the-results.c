/*
 * Program: Step 3 Combine The Results
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int n = 0x9ab;

    n = ((n & 0xCCCCCCCCu) >> 2) |
        ((n & 0x33333333u) << 2);

    printf("%x\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
