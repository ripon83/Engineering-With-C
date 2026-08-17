/*
 * Program: Fibonacci Using Recursion
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

long int fib(int n)
{
    if(n==0 || n==1)
        return n;

    return fib(n-1) + fib(n-2);
}

int main()  // Main function: execution starts here
{
    int n=9;
    printf("%dth Fibonacci number is %ld", n, fib(n));  // Display output
    return 0;  // Indicate successful program termination
}
