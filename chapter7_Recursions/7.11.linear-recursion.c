/*
 * Program: Linear Recursion
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

long int fact(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

int main()  // Main function: execution starts here
{
    int n = 5;

    printf("Factorial of %d is %ld", n, fact(n));  // Display output

    return 0;  // Indicate successful program termination
}
