/*
 * Program: Factorial Numbers
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

unsigned long long factorial(int n)
{
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++)  // Repeat the required operation
        fact = fact * i;

    return fact;
}

int main()  // Main function: execution starts here
{
    int n = 20;

    printf("%llu\n", factorial(n));  // Display output

    return 0;  // Indicate successful program termination
}
