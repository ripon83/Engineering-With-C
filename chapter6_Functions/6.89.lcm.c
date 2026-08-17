/*
 * Program: Lcm
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int gcd(int m, int n)
{
    while (m != 0 && n != 0)  // Repeat while the condition remains true
    {
        if (m > n)
            m = m % n;
        else
            n = n % m;
    }

    if (m == 0)
        return n;
    else
        return m;
}

int lcm(int m, int n)
{
    return (m / gcd(m, n)) * n;
}

int main()  // Main function: execution starts here
{
    int m = 15, n = 25;

    printf("The LCM is %d\n", lcm(m, n));  // Display output

    return 0;  // Indicate successful program termination
}
