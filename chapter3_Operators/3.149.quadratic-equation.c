/*
 * Program: Quadratic Equation
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#include <math.h>
int main()  // Main function: program execution starts here
{
    int a=1,b=3,c=-4;
    double x1,x2;
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    printf("x1=%lf\tx2=%lf",x1,x2);  // Display output
    return 0;  // Indicate successful program termination
}
