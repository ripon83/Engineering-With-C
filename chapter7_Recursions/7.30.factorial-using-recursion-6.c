/*
 * Program: Factorial Using Recursion 6
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n * fact(n-1);
}

int main()  // Main function: execution starts here
{
    int n=12;
    printf("%d", fact(n));  // Display output
    return 0;  // Indicate successful program termination
}
