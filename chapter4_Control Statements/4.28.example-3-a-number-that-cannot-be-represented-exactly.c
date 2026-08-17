/*
 * Program: Example 3 A Number That Cannot Be Represented Exactly
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    double a = 0.1;
    double b = 0.1;

    if(a == b)  // Test the specified condition
        printf("Equal\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not equal\n");  // Display output

    return 0;  // Indicate successful program termination
}
