/*
 * Program: Bitwise Operators 27
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int n = 10;
    int m = (n << 3) - n;
    printf("%d multiplied by 7 is %d\n", n, m);  // Display output
    return 0;  // Indicate successful program termination
}
