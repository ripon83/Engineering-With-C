/*
 * Program: Relational Operators 2
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int n = 1024;
    int sign = (n >= 0) - (n < 0);

    printf("Sign = %d", sign);  // Display output

    return 0;  // Indicate successful program termination
}
