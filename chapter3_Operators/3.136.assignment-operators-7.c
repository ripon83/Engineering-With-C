/*
 * Program: Assignment Operators 7
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define largest(x,y,z) \  // Define a macro
        ((x > y && x > z) ? x : (y > z ? y : z))

int main()  // Main function: program execution starts here
{
    int x = 10, y = 20, z = 30;
    int w = largest(x, y, z);

    printf("The largest value: %d", w);  // Display output
    return 0;  // Indicate successful program termination
}
