/*
 * Program: Typedef
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    typedef unsigned long int uli;  // Create a type alias

    uli n = 20;

    printf("n=%lu", n);  // Display output

    return 0;  // Indicate successful program termination
}
