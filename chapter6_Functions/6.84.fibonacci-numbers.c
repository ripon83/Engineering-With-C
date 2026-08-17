/*
 * Program: Fibonacci Numbers
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
long fibonacci(int n)
{
    long a=0, b=1, c, i;
    if(n==0 || n==1)
        return n;
    for(i=2; i<=n; i++)  // Repeat the required operation
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
void FibonacciSeries(int n)
{
    for(int i=0; i<=n; i++)  // Repeat the required operation
        printf("%ld\t", fibonacci(i));  // Display output
}
int main()  // Main function: execution starts here
{
    FibonacciSeries(92);
    return 0;  // Indicate successful program termination
}
