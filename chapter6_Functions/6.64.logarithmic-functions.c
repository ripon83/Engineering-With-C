/*
 * Program: Logarithmic Functions
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

int main()  // Main function: execution starts here
{
    int n=1024;

    printf("The ln is: %lf\n", log(n));  // Display output
    printf("The log2 is: %lf\n", log2(n));  // Display output
    printf("The log10 is: %lf\n", log10(n));  // Display output

    return 0;  // Indicate successful program termination
}
