/*
 * Program: Variables 11
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int x = 10;   // Local variable

    extern int x; // Error

    printf("%d", x);  // Display output

    return 0;  // Indicate successful program termination
}
