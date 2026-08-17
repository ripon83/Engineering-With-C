/*
 * Program: Quadratic Equation 3
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#include <math.h>
int main()  // Main function: program execution starts here
{
    double t,s=80,d=450;
    t=d/s;
    printf("We need %0.2lf hours to cover %0.2lf km at %.2lf km/h",t,d,s);  // Display output
    return 0;  // Indicate successful program termination
}
