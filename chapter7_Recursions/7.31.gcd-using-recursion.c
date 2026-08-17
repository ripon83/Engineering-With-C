/*
 * Program: Gcd Using Recursion
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
int gcd(int m, int n)
{
    if(m==n)
        return m;
    if(m>n)
        return gcd(m-n, n);
    return gcd(m, n-m);
}
int main()  // Main function: execution starts here
{
    printf("%d", gcd(15, 3));  // Display output
    return 0;  // Indicate successful program termination
}
