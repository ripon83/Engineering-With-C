/*
 * Program: Find Out The Output 55
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
long fib(int n)
{
    long f[]={0, 1, 1, 2, 3, 5, 8, 13};
    return f[n-1];
}
int main()  // Main function: execution starts here
{
    printf("%ld", fib(7));  // Display output
    return 0;  // Indicate successful program termination
}
