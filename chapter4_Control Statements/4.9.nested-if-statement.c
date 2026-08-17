/*
 * Program: Nested If Statement
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 10;

    if (n < 0)  // Test the specified condition
    {
        if (n >= -100)  // Test the specified condition
            printf("Between -100 and 0\n");  // Display output
        else  // Execute this branch when the preceding condition is false
            printf("Less than -100\n");  // Display output
    }
    else  // Execute this branch when the preceding condition is false
    {
        if (n >= 100)  // Test the specified condition
            printf("Greater than or equal to 100\n");  // Display output
        else  // Execute this branch when the preceding condition is false
            printf("Between 0 and 99\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
