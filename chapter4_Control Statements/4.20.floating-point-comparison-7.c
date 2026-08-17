/*
 * Program: Floating Point Comparison 7
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    float n = 4.0001;
    int round = n > 0 ? n + 0.999999999 : n - 0.999999999;

    printf("The rounded number is: %d\n", round);  // Display output

    return 0;  // Indicate successful program termination
}
