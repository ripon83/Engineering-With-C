/*
 * Program: Comparison Of The Three Methods
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int a = 2, b = 4, c = 6, d = 8, e = 10;
    int gcd = 1, i;

    for(i = 1; i <= a && i <= b && i <= c && i <= d && i <= e; i++)  // Repeat the required operation
    {
        if(a % i == 0 && b % i == 0 &&
           c % i == 0 && d % i == 0 &&
           e % i == 0)
        {
            gcd = i;
        }
    }

    printf("The GCD is: %d\n", gcd);  // Display output

    return 0;  // Indicate successful program termination
}
