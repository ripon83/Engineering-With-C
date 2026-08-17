/*
 * Program: Bitwise Operators 11
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int x = 20, y = 8;
    long int p = (long int)x << y;

    printf("%d*(2^%d) = %ld\n",  // Display output
           x, y, p);

    return 0;  // Indicate successful program termination
}
