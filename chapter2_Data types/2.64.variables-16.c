/*
 * Program: Variables 16
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    register int n = 20;

    printf("Value = %d\n", n);  // Display output
    printf("Address = %p", &n);  // Display output

    return 0;  // Indicate successful program termination
}
