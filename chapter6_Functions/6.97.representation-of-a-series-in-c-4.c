/*
 * Program: Representation Of A Series In C 4
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

double ln(int x, int n)
{
    double c=0.0;
    int i, j=0;

    for(i=1; i<=n; i++, j++)  // Repeat the required operation
        c=c+pow(-1, j)*pow(x, i)/i;

    return c;
}

int main()  // Main function: execution starts here
{
    printf("Sum: %lf", ln(2, 10));  // Display output
    return 0;  // Indicate successful program termination
}
