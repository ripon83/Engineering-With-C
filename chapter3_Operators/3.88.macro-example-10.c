/*
 * Program: Macro Example 10
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

#define reverse(n) do {                         \  // Define a macro
    (n) = (((n) & 0xaaaaaaaa) >> 1) |          \
          (((n) & 0x55555555) << 1);            \
    (n) = (((n) & 0xcccccccc) >> 2) |          \
          (((n) & 0x33333333) << 2);            \
    (n) = (((n) & 0xf0f0f0f0) >> 4) |         \
          (((n) & 0x0f0f0f0f) << 4);            \
    (n) = (((n) & 0xff00ff00) >> 8) |         \
          (((n) & 0x00ff00ff) << 8);            \
    (n) = ((n) >> 16) | ((n) << 16);            \
} while (0)

int main()  // Main function: program execution starts here
{
    unsigned int n = 0x9ab;

    reverse(n);

    printf("The output in hexadecimal is %x\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
