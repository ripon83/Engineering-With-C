/*
 * Program: Iterative Memoization
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
long fib(int n) 
{
    long f[100] = {0,1,1,2,3,5,8,13,21,34,55,89,144};  // Store a value in an array element
    int i;

    if(n<=0)
        return -1;

    if(n<=13)
        return f[n-1];

    for(i=13; i<n; i++)  // Iterate through array elements
        f[i]=f[i-1]+f[i-2];  // Store a value in an array element

    return f[n-1];
}

int main()   // Main function: execution starts here
{
    printf("%ld", fib(14));  // Display output
    return 0;  // Indicate successful program termination
}
