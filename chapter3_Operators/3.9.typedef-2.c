/*
 * Program: Typedef 2
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    typedef long double ld;  // Create a type alias

    ld n = 20.235146;

    printf("n=%Lf", n);  // Display output

    return 0;  // Indicate successful program termination
}
