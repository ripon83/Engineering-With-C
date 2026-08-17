/*
 * Program: Logarithmic Functions 4
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

int main()  // Main function: execution starts here
{
    double m=9.0, n=27.0;

    printf("The sqrt in \"float\" format is: %f\n", sqrtf(m));  // Display output
    printf("The sqrt in \"double\" format is: %lf\n", sqrt(m));  // Display output
    printf("The sqrt in \"long double\" format is: %LF\n", sqrtl(m));  // Display output

    printf("\nThe cbrt in \"float\" format is: %f\n", cbrtf(n));  // Display output
    printf("The cbrt in \"double\" format is: %lf\n", cbrt(n));  // Display output
    printf("The cbrt in \"long double\" format is: %LF\n", cbrtl(n));  // Display output

    return 0;  // Indicate successful program termination
}
