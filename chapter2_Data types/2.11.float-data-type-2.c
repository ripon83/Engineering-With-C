/*
 * Program: Float Data Type 2
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    float m = 6.9;

    printf("The size of m is %zu bytes\n", sizeof(m));  // Display output
    printf("The size of 6.9 is %zu bytes\n", sizeof(6.9));  // Display output

    return 0;  // Indicate successful program termination
}
