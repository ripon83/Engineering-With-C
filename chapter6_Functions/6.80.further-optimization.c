/*
 * Program: Further Optimization
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;  // Indicate successful program termination

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;  // Indicate successful program termination

    for (int i = 3; i * i <= n; i += 2)  // Repeat the required operation
    {
        if (n % i == 0)
            return 0;  // Indicate successful program termination
    }

    return 1;
}

int main()  // Main function: execution starts here
{
    int n = 97;

    if (isPrime(n))
        printf("%d is a prime number\n", n);  // Display output
    else
        printf("%d is not a prime number\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
