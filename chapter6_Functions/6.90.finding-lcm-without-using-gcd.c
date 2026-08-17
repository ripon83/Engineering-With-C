/*
 * Program: Finding Lcm Without Using Gcd
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

int lcm(int m, int n)
{
    int value = (m > n) ? m : n;

    while (value % m != 0 || value % n != 0)  // Repeat while the condition remains true
        value++;

    return value;
}

int main()  // Main function: execution starts here
{
    int m = 15, n = 25;

    printf("The LCM is %d\n", lcm(m, n));  // Display output

    return 0;  // Indicate successful program termination
}
