/*
 * Program: Example 1 Comparing Two Integers
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int a = 10;
    int b = 10;

    if(a == b)  // Test the specified condition
        printf("Equal\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not equal\n");  // Display output

    return 0;  // Indicate successful program termination
}
