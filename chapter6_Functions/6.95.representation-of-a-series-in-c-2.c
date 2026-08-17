/*
 * Program: Representation Of A Series In C 2
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

double sine(int x, int n)
{
    double s=0.0;
    int j=0;

    for(int i=1; i<=n; i=i+2, j++)  // Repeat the required operation
        s=s+pow(-1, j)*pow(x, i)/fact(i);

    return s;
}

int main()  // Main function: execution starts here
{
    printf("Sum: %lf", sine(2, 10));  // Display output
    return 0;  // Indicate successful program termination
}
