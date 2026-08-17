/*
 * Program: Bitwise Operators 15
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int x = 1024, y = 8;
    int result = x >> y;

    printf("%d/(2^%d) = %d\n",  // Display output
           x, y, result);

    return 0;  // Indicate successful program termination
}
