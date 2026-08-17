/*
 * Program: Factorial Using Recursion 3
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

long int sum(int m, int n)
{
    if(n == 0)
        return m;
    return sum(m + 1, n - 1);
}

int main()  // Main function: execution starts here
{
    int m = 10, n = 5;

    printf("The addition of %d and %d is %ld",  // Display output
           m, n, sum(m, n));  // Function call

    return 0;  // Indicate successful program termination
}
