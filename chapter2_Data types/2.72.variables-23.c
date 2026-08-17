/*
 * Program: Variables 23
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int x = 10;

    extern int x;

    printf("%d", x);  // Display output

    return 0;  // Indicate successful program termination
}
