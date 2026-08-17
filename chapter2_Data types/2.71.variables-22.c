/*
 * Program: Variables 22
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int value = 50;

int main()  // Main function: program execution starts here
{
    extern int value;

    printf("%d", value);  // Display output

    return 0;  // Indicate successful program termination
}
