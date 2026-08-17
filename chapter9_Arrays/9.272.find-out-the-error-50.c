/*
 * Program: Find Out The Error 50
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
long fib(int n)
{
    long f[10]={0,1,1,2,3,5,8,13,21,34};  // Store a value in an array element
    return f[n-1];
}
int main()  // Main function: execution starts here
{
    printf("%ld", fib(20));  // Display output
    return 0;  // Indicate successful program termination
}
