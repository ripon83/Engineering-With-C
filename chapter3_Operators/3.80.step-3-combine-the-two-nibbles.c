/*
 * Program: Step 3 Combine The Two Nibbles
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int n = 0x9ab;

    n = ((n & 0xAAAAAAAAu) >> 1) |
        ((n & 0x55555555u) << 1);

    printf("Original and swapped values are shown in hexadecimal.\n");  // Display output
    printf("Swapped = %x\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
