/*
 * Program: Method 3 Modulus Method
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int gcd(int m, int n)
{
    while (n != 0)  // Repeat while the condition remains true
    {
        int r = m % n;
        m = n;
        n = r;
    }

    return m;
}

int main()  // Main function: execution starts here
{
    int m = 56, n = 28;

    printf("The GCD is %d\n", gcd(m, n));  // Display output

    return 0;  // Indicate successful program termination
}
