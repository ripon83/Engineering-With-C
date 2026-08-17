/*
 * Program: Problems On Series
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

double series(double x, int n)
{
    int i;
    double sum = 0.0;

    for(i=1; i<=n; i++)  // Repeat the required operation
    {
        sum += 1.0 / sqrt(pow(x, i));
    }

    return sum;
}

int main()  // Main function: execution starts here
{
    int n = 100;
    double x = 2.5, sum;

    sum = series(x, n);

    printf("The summation is: %lf\n", sum);  // Display output

    return 0;  // Indicate successful program termination
}
