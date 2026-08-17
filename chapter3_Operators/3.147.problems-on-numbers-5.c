/*
 * Program: Problems On Numbers 5
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    double d, f=89.6;
    d= (f-32)*(5.0/9);
    printf("The Fahrenheit %0.2lf is %0.2lf in Celsius",f,d);  // Display output
    return 0;  // Indicate successful program termination
}
