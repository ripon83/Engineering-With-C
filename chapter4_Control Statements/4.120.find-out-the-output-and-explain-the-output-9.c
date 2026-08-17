/*
 * Program: Find Out The Output And Explain The Output 9
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int m = 0, n = 1;
    if (m || ++n)  // Test the specified condition
        printf("Yes: %d", n);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("No: %d", n);  // Display output
    return 0;  // Indicate successful program termination
}
