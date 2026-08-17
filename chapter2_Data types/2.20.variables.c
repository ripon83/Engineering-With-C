/*
 * Program: Variables
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int x;          // Global variable

int main()  // Main function: program execution starts here
{
    static int y;   // Static local variable
    int z;          // Local variable

    printf("x = %d\n", x);  // Display output
    printf("y = %d\n", y);  // Display output
    printf("z = %d\n", z);  // Display output

    return 0;  // Indicate successful program termination
}
