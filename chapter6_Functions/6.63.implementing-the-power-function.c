/*
 * Program: Implementing The Power Function
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

double my_pow(double x, double y)
{
    return exp(y*log(x));
}

int main()  // Main function: execution starts here
{
    printf("%lf", my_pow(2,2.5));  // Display output
    return 0;  // Indicate successful program termination
}
