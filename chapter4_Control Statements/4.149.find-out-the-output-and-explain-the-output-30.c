/*
 * Program: Find Out The Output And Explain The Output 30
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int a = 10;
    if (a == 10)  // Test the specified condition
        if (a > 5)  // Test the specified condition
            printf("A");  // Display output
        else  // Execute this branch when the preceding condition is false
            printf("B");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("C");  // Display output
    return 0;  // Indicate successful program termination
}
