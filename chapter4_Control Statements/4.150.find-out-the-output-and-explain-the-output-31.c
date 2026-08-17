/*
 * Program: Find Out The Output And Explain The Output 31
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int a = 10;
    if (a > 5)  // Test the specified condition
        printf("A");  // Display output
        printf("B");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("C");  // Display output
    return 0;  // Indicate successful program termination
}
