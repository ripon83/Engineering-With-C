/*
 * Program: Indirect Recursion 3
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>

int y(int);  // Function call

int x(int n)
{
    if(n<=1)
        return 1;
    return n*y(n-1);
}

int y(int n)
{
    if(n<=1)
        return 1;
    return x(n);
}

int main()  // Main function: execution starts here
{
    int n=5;
    int m=x(n);  // Function call

    printf("Factorial of %d is %d", n, m);  // Display output
}
