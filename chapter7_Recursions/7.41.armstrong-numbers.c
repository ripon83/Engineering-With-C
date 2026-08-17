/*
 * Program: Armstrong Numbers
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

#include <stdio.h>
#include <math.h>

int count(int n)
{
    if(n == 0)
        return 0;  // Indicate successful program termination

    return 1 + count(n / 10);
}

int powerSum(int n, int digits)
{
    if(n == 0)
        return 0;  // Indicate successful program termination

    return pow(n % 10, digits)
           + powerSum(n / 10, digits);  // Function call
}

int isArmstrong(int n)
{
    int digits = count(n);  // Function call
    return (n == powerSum(n, digits));
}

int main()  // Main function: execution starts here
{
    int n = 153;

    if(isArmstrong(n))
        printf("The number %d is an Armstrong number\n", n);  // Display output
    else
        printf("The number %d is not an Armstrong number\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
