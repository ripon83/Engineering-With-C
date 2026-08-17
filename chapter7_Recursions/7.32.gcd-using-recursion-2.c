/*
 * Program: Gcd Using Recursion 2
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int gcd(int m, int n)
{
    if(m==0)
        return n;
    if(n==0)
        return m;
    if(m>n)
        return gcd(m%n, n);
    return gcd(m, n%m);
}
int main()  // Main function: execution starts here
{
    printf("%d", gcd(3, 15));  // Display output
    return 0;  // Indicate successful program termination
}
