/*
 * Program: Bitwise Operators 10
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int x = 10, y = 7;
    long int p = (long int)x << y;

    printf("%d*(2^%d) = %ld\n",  // Display output
           x, y, p);

    return 0;  // Indicate successful program termination
}
