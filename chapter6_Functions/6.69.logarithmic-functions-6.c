/*
 * Program: Logarithmic Functions 6
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

double to_radians(double n)
{
    return n * (M_PI / 180.0);
}

int main()  // Main function: execution starts here
{
    double n=45, rad;

    rad=to_radians(n);

    printf("sin(%.2f) = %.4f\n", n, sin(rad));  // Display output
    printf("cos(%.2f) = %.4f\n", n, cos(rad));  // Display output
    printf("tan(%.2f) = %.4f\n", n, tan(rad));  // Display output

    return 0;  // Indicate successful program termination
}
