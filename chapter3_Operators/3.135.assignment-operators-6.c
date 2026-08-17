/*
 * Program: Assignment Operators 6
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x = 10, y = 20, z = 30;
    int w = (x > y && x > z) ? x : (y > z ? y : z);

    printf("The largest value: %d", w);  // Display output
    return 0;  // Indicate successful program termination
}
