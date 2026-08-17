/*
 * Program: Bitwise Operators 18
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    unsigned int max = ~0U;
    max >>= 1;

    unsigned int min = ~max;

    printf("Minimum value of int = %d\n", (int)min);  // Display output
    printf("Maximum value of int = %d\n", (int)max);  // Display output

    return 0;  // Indicate successful program termination
}
