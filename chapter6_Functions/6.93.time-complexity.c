/*
 * Program: Time Complexity
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

double series(int n)
{
    int i;
    double sum = 0.0;

    for(i=1; i<=n; i++)  // Repeat the required operation
        sum += 1.0/sqrt(i);

    return sum;
}

int main()  // Main function: execution starts here
{
    int n = 10;
    double m;

    m = series(n)/n;

    printf("The result is: %lf\n", m);  // Display output

    return 0;  // Indicate successful program termination
}
