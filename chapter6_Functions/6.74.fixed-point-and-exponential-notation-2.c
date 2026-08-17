/*
 * Program: Fixed Point And Exponential Notation 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

long double factorial(int n)
{
    long double fact = 1.0L;

    for (int i = 1; i <= n; i++)  // Repeat the required operation
        fact *= i;

    return fact;
}

int main()  // Main function: execution starts here
{
    int n = 25;

    printf("%Le\n", factorial(n));  // Display output

    return 0;  // Indicate successful program termination
}
