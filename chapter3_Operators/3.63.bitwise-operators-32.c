/*
 * Program: Bitwise Operators 32
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m=23, n=5;
    int min=n^((m^n)&-(m<n));

    printf("Minimum = %d\n",min);  // Display output
    return 0;  // Indicate successful program termination
}
