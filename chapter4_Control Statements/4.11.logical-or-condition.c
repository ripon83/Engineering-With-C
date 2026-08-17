/*
 * Program: Logical Or Condition
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 500;

    if (n >= 100 || n >= 1000)  // Test the specified condition
        printf("At least one condition is true.\n");  // Display output
    else if (n >= 0)  // Test the next alternative condition
        printf("The number is nonnegative.\n");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("The number is negative.\n");  // Display output

    return 0;  // Indicate successful program termination
}
