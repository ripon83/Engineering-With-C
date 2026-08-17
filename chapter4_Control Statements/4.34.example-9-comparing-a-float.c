/*
 * Program: Example 9 Comparing A Float
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    float n = 0.1f;

    if(n == 0.1f)  // Test the specified condition
        printf("Equal\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not equal\n");  // Display output

    return 0;  // Indicate successful program termination
}
