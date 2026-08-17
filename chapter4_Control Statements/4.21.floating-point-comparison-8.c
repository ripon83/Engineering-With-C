/*
 * Program: Floating Point Comparison 8
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    double n = 6.2356;

    n = (int)(n * 100 + 0.5);
    n = n / 100;

    printf("Rounded off: %.2f\n", n);  // Display output

    return 0;  // Indicate successful program termination
}
