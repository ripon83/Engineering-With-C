/*
 * Program: Factorial Using Recursion 4
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int sum(int n)
{
    if(n == 0)
        return 0;  // Indicate successful program termination

    return (n % 10) + sum(n / 10);
}

int main()  // Main function: execution starts here
{
    printf("Summation is: %d\n", sum(12345));  // Display output
    return 0;  // Indicate successful program termination
}
