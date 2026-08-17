/*
 * Program: Another Example 0 45
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    float n=0.45;
    if(n==0.45)  // Test the specified condition
        printf("Equal");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not equal");  // Display output
    return 0;  // Indicate successful program termination
}
