/*
 * Program: Using An Accumulator
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int sum(int n, int res)
{
    if(n == 0)
        return res;

    return sum(n / 10, res + n % 10);
}

int main()  // Main function: execution starts here
{
    printf("Summation is: %d\n", sum(12345, 0));  // Display output
    return 0;  // Indicate successful program termination
}
