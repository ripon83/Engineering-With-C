/*
 * Program: Find Out The Output And Explain The Output 4
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x = 4, y = 2, z = 1;
    if (x > y > z)  // Test the specified condition
        printf("Yes");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("No");  // Display output
    return 0;  // Indicate successful program termination
}
