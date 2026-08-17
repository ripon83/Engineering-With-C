/*
 * Program: Method 1 Finding Common Factors
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int gcd(int m, int n)
{
    int GCD = 1;
    int limit = (m < n) ? m : n;

    for (int i = 1; i <= limit; i++)  // Repeat the required operation
    {
        if (m % i == 0 && n % i == 0)
            GCD = i;
    }

    return GCD;
}

int main()  // Main function: execution starts here
{
    int m = 56, n = 28;

    printf("The GCD is %d\n", gcd(m, n));  // Display output

    return 0;  // Indicate successful program termination
}
