/*
 * Program: Representation Of A Series In C 5
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

long fact(int n)
{
    int f=1;
    if(n==0 || n==1)
        return 1;
    for(int i=1; i<=n; i++)  // Repeat the required operation
        f=f*i;
    return f;
}

double binomial(int x, int n)
{
    double b=1.0, m=n;

    for(int i=1; i<=n; i++)  // Repeat the required operation
    {
        if(i==1)
            m=n;
        else
            m=m*(n-i+1);

        b=b+(m/fact(i))*pow(x,i);
    }
    return b;
}

int main()  // Main function: execution starts here
{
    printf("Sum: %lf", binomial(2,10));  // Display output
    return 0;  // Indicate successful program termination
}
