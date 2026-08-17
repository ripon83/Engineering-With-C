/*
 * Program: Example 1 Using Extern Within The Same File
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int x = 100;   // Global variable definition

int main()  // Main function: program execution starts here
{
    extern int x;   // External declaration
    printf("%d", x);  // Display output

    return 0;  // Indicate successful program termination
}
