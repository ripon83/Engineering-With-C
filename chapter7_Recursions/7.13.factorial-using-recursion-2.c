/*
 * Program: Factorial Using Recursion 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

long int sum(int n)
{
    if(n == 0)
        return 0;  // Indicate successful program termination

    return n + sum(n - 1);
}

int main()  // Main function: execution starts here
{
    int n = 5;

    printf("The summation upto %d is %ld", n, sum(n));  // Display output

    return 0;  // Indicate successful program termination
}
