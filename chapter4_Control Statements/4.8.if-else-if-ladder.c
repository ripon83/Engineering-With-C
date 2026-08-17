/*
 * Program: If Else If Ladder
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 3;

    if (n == 0)  // Test the specified condition
        printf("The value is zero.\n");  // Display output
    else if (n == 1)  // Test the next alternative condition
        printf("The value is one.\n");  // Display output
    else if (n == 2)  // Test the next alternative condition
        printf("The value is two.\n");  // Display output
    else if (n == 3)  // Test the next alternative condition
        printf("The value is three.\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("The value is greater than three.\n");  // Display output

    return 0;  // Indicate successful program termination
}
