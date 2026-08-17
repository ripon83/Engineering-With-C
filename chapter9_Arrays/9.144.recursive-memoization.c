/*
 * Program: Recursive Memoization
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>

long fib(int n) 
{
    static long f[100] =  // Store a value in an array element
    {0,1,1,2,3,5,8,13,21,34,55,89,144};

    if(n<=0)
        return -1;

    if(n<=13)
        return f[n-1];

    if(f[n-1]!=0)
        return f[n-1];

    f[n-1]=fib(n-1)+fib(n-2);  // Store a value in an array element

    return f[n-1];
}

int main()   // Main function: execution starts here
{
    printf("%ld", fib(14));  // Display output
    return 0;  // Indicate successful program termination
}
