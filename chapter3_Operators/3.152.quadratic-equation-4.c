/*
 * Program: Quadratic Equation 4
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#include <math.h>
int main()  // Main function: program execution starts here
{
    double prof,fy=220,sy=280;
    prof=(sy-fy)/fy*100;
    printf("Net improvement in revenue:%0.2lf%%",prof);  // Display output
    return 0;  // Indicate successful program termination
}
