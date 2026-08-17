/*
 * Program: Example 6 Comparing Using A Tolerance
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#include <math.h>

int main()  // Main function: program execution starts here
{
    double a = 0.1 + 0.2;
    double b = 0.3;
    double tolerance = 1e-9;

    if(fabs(a - b) < tolerance)  // Test the specified condition
        printf("Approximately equal\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not equal\n");  // Display output

    return 0;  // Indicate successful program termination
}
