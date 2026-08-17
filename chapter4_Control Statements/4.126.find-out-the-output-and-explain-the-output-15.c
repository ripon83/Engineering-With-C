/*
 * Program: Find Out The Output And Explain The Output 15
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    float m = 0.5;
    if (m > 0.5)  // Test the specified condition
        printf("Greater");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Not greater");  // Display output
    return 0;  // Indicate successful program termination
}
