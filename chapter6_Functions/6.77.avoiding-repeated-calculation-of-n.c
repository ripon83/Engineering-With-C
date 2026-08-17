/*
 * Program: Avoiding Repeated Calculation Of N
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;  // Indicate successful program termination

    int limit = sqrt(n);

    for (int i = 2; i <= limit; i++)  // Repeat the required operation
    {
        if (n % i == 0)
            return 0;  // Indicate successful program termination
    }

    return 1;
}

int main()  // Main function: execution starts here
{
    int n = 25;

    if (isPrime(n))
        printf("%d is a prime number\n", n);  // Display output
    else
        printf("%d is not a prime number\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
