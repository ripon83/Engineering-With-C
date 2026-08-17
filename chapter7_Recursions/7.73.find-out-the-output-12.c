/*
 * Program: Find Out The Output 12
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
long int power(int x, int n)
{
    if(n==0)
        return 1;

    return (n%2==0) ? power(x*x, n/2) : power(x*x, n/2) * x;
}
int main()  // Main function: execution starts here
{
    int x = 2, n = 10;
    printf("%d^%d=%ld\n", x, n, power(x, n));  // Display output
    return 0;  // Indicate successful program termination
}
