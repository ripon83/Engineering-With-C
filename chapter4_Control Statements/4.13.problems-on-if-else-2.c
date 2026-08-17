/*
 * Program: Problems On If Else 2
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    float x = 3, y = 7, z = 100;

    if (x / y * z == 0)  // Test the specified condition
        printf("Zero");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Non zero");  // Display output

    return 0;  // Indicate successful program termination
}
