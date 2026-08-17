/*
 * Program: Example 7 Comparing Two Measurements
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#include <math.h>

int main()  // Main function: program execution starts here
{
    double measured = 10.000001;
    double expected = 10.000000;
    double tolerance = 0.00001;

    if(fabs(measured - expected) < tolerance)  // Test the specified condition
        printf("Values are approximately equal\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Values are different\n");  // Display output

    return 0;  // Indicate successful program termination
}
