/*
 * Program: Loss Of Information During Type Conversion
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    long int x = 1099511751232;
    int y = (int)x;

    printf("y = %d", y);  // Display output

    return 0;  // Indicate successful program termination
}
