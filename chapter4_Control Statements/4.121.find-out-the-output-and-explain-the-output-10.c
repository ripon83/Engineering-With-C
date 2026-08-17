/*
 * Program: Find Out The Output And Explain The Output 10
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int m = 4;
    if (printf("Love is a powerful weapon\n") && ++m)  // Test the specified condition
        printf("Use it in your study: %d", m);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("No need: %d", m);  // Display output
    return 0;  // Indicate successful program termination
}
