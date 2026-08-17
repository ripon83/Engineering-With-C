/*
 * Program: Using A Static Variable
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int sum(int n)
{
    static int res = 0;

    if(n == 0)
        return res;

    res += n % 10;
    return sum(n / 10);
}

int main()  // Main function: execution starts here
{
    printf("Summation is: %d\n", sum(12345));  // Display output
    return 0;  // Indicate successful program termination
}
