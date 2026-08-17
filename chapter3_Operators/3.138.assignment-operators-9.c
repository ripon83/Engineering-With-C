/*
 * Program: Assignment Operators 9
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
#define smallest(x,y,z) \  // Define a macro
        ((x<y && x<z) ? x : (y<z ? y : z))
int main()  // Main function: program execution starts here
{
    int x=20, y=10, z=30;
    int w=smallest(x,y,z);
    printf("The smallest value: %d",w);  // Display output
    return 0;  // Indicate successful program termination
}
