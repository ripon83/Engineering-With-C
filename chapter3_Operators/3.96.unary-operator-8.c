/*
 * Program: Unary Operator 8
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x=10;
    (++x%2) ? printf("Odd number\n") : printf("Even number");
    return 0;  // Indicate successful program termination
}
