/*
 * Program: Bitwise Operators 38
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x = 25;
    (x % 3 == 0) ?
        printf("%d is divisible by 3", x) :  // Display output
        printf("%d is not divisible by 3", x);  // Display output
    return 0;  // Indicate successful program termination
}
