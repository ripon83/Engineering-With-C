/*
 * Program: Bitwise Operators 30
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#include <stdlib.h>

int main()  // Main function: program execution starts here
{
    int m=23, n=5;
    int min=(m+n-abs(m-n))/2;

    printf("Minimum = %d\n",min);  // Display output
    return 0;  // Indicate successful program termination
}
