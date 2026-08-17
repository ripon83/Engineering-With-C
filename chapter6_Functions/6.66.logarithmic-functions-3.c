/*
 * Program: Logarithmic Functions 3
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>
#include <math.h>

int main()  // Main function: execution starts here
{
    int n=1024;

    printf("The ln in \"float\" format is: %f\n", logf(n));  // Display output
    printf("The ln in \"double\" format is: %lf\n", log(n));  // Display output
    printf("The ln in \"long double\" format is: %LF\n", logl(n));  // Display output

    return 0;  // Indicate successful program termination
}
