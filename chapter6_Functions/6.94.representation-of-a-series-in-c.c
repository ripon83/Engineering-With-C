/*
 * Program: Representation Of A Series In C
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

long fact(int n)
{
    long f=1;

    if(n==0 || n==1)
        return 1;

    for(int i=1; i<=n; i++)  // Repeat the required operation
        f=f*i;

    return f;
}

double exponent(int x, int n)
{
    double e=0.0;

    for(int i=0; i<=n; i++)  // Repeat the required operation
        e=e+pow(x, i)/fact(i);

    return e;
}

int main()  // Main function: execution starts here
{
    printf("Sum: %lf", exponent(2, 10));  // Display output
    return 0;  // Indicate successful program termination
}
