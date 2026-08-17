/*
 * Program: Bitwise Operators 37
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x = 25;
    (x & 1) ?
        printf("%d is odd", x) :  // Display output
        printf("%d is even", x);  // Display output
    return 0;  // Indicate successful program termination
}
