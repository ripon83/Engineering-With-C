/*
 * Program: Prime Numbers
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
#include <math.h>

int isPrime(int n, int divisor)
{
    if(n <= 1)
        return 0;  // Indicate successful program termination

    if(divisor == 1)
        return 1;

    if(n % divisor == 0)
        return 0;  // Indicate successful program termination

    return isPrime(n, divisor - 1);
}

int testPrime(int n)
{
    return isPrime(n, sqrt(n));
}

int main()  // Main function: execution starts here
{
    int n = 29;

    if(testPrime(n))
        printf("The number %d is a prime number", n);  // Display output
    else
        printf("The number %d is not a prime number", n);  // Display output

    return 0;  // Indicate successful program termination
}
