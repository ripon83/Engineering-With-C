/*
 * Program: Comparing A Double 2
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    double n = 1.2345;

    if(n < 1.2345f)  // Test the specified condition
        printf("Less");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not less");  // Display output

    return 0;  // Indicate successful program termination
}
