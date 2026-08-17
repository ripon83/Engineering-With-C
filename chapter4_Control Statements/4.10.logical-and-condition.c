/*
 * Program: Logical And Condition
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = -110;

    if (n >= 0 && n <= 100)  // Test the specified condition
        printf("Between 0 and 100\n");  // Display output
    else if (n > 100 && n <= 200)  // Test the next alternative condition
        printf("Between 101 and 200\n");  // Display output
    else if (n > 200)  // Test the next alternative condition
        printf("Greater than 200\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("It is a negative number\n");  // Display output

    return 0;  // Indicate successful program termination
}
