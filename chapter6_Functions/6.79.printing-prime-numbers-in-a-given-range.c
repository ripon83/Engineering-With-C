/*
 * Program: Printing Prime Numbers In A Given Range
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;  // Indicate successful program termination

    for (int i = 2; i * i <= n; i++)  // Repeat the required operation
    {
        if (n % i == 0)
            return 0;  // Indicate successful program termination
    }

    return 1;
}

int main()  // Main function: execution starts here
{
    int n = 100;

    for (int i = 2; i <= n; i++)  // Repeat the required operation
    {
        if (isPrime(i))
            printf("%d\t", i);  // Display output
    }

    return 0;  // Indicate successful program termination
}
