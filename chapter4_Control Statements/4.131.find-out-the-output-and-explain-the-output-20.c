/*
 * Program: Find Out The Output And Explain The Output 20
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 1;
    if (n++ && n++)  // Test the specified condition
        printf("%d", n);  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("%d", n);  // Display output
    return 0;  // Indicate successful program termination
}
