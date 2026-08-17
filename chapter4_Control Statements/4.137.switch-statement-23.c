/*
 * Program: Switch Statement 23
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 2;
    switch (n)  // Select a branch based on the expression value
    {
        case 1:
            printf("One");  // Display output
        case 2:
            printf("Two");  // Display output
        case 3:
            printf("Three");  // Display output
        default:
            printf("Default");  // Display output
    }
    return 0;  // Indicate successful program termination
}
