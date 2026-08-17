/*
 * Program: The Fmod
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

int main()  // Main function: execution starts here
{
    double m=3.12345;

    printf("The modulus is: %lf\n", fmod(m,10));  // Display output
    printf("The modulus is: %lf\n", fmod(m,1));  // Display output
    printf("The modulus is: %lf\n", fmod(m,3));  // Display output
    printf("The modulus is: %lf\n", fmod(m,3.12345));  // Display output
    printf("The modulus is: %lf\n", fmod(m,0.12345));  // Display output

    return 0;  // Indicate successful program termination
}
