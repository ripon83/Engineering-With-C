/*
 * Program: Uninitialized Data Segment Bss
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int m;      // Global variable

int main()  // Main function: program execution starts here
{
    static int n;   // Static variable
    return 0;  // Indicate successful program termination
}
