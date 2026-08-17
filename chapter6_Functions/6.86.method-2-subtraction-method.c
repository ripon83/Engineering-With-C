/*
 * Program: Method 2 Subtraction Method
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int gcd(int m, int n)
{
    while (m != n)  // Repeat while the condition remains true
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }

    return m;
}

int main()  // Main function: execution starts here
{
    int m = 56, n = 28;

    printf("The GCD is %d\n", gcd(m, n));  // Display output

    return 0;  // Indicate successful program termination
}
