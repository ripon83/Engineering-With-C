/*
 * Program: Quadratic Equation 2
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#include <math.h>
int main()  // Main function: program execution starts here
{
    double pi=3.1415926;
    double area=2;
    double diam=2*sqrt(area/pi);
    printf("The diameter is: %lf\n",diam);  // Display output
    return 0;  // Indicate successful program termination
}
