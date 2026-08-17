/*
 * Program: Conversion From A Larger Integer Type 2
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    long double x = 20;
    float y = (float)x;

    printf("y = %f", y);  // Display output

    return 0;  // Indicate successful program termination
}
