/*
 * Program: Find Out The Output And Explain The Output 25
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 5;
    if (n & 1)  // Test the specified condition
        printf("Odd");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Even");  // Display output
    return 0;  // Indicate successful program termination
}
