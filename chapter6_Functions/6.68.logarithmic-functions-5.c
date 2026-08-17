/*
 * Program: Logarithmic Functions 5
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

double SQRT(double x)
{
    if(x<0)
    {
        printf("No square root!");  // Display output
        return 0;  // Indicate successful program termination
    }

    return pow(x,0.5);
}

int main()  // Main function: execution starts here
{
    double n=5;
    double s=SQRT(n);

    printf("The square root of %lf is %lf\n", n, s);  // Display output

    return 0;  // Indicate successful program termination
}
