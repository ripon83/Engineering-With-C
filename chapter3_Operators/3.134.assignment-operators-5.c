/*
 * Program: Assignment Operators 5
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x = 10, y = 20, z = 1;
    z += (x < y) ? x : y;
    printf("z=%d", z);  // Display output
    return 0;  // Indicate successful program termination
}
