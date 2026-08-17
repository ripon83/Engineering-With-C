/*
 * Program: Floating Point Comparison 12
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#include <math.h>

int main()  // Main function: program execution starts here
{
    double a = 1000000.0;
    double b = 1000000.000001;
    double tolerance = 1e-9;

    if(fabs(a - b) <=  // Test the specified condition
       tolerance * fmax(fabs(a), fabs(b)))
        printf("Approximately equal\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not equal\n");  // Display output

    return 0;  // Indicate successful program termination
}
