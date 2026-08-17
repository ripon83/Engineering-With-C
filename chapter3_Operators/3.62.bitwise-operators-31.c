/*
 * Program: Bitwise Operators 31
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m=23, n=5;
    int max=m^((m^n)&-(m<n));

    printf("Maximum = %d\n",max);  // Display output
    return 0;  // Indicate successful program termination
}
