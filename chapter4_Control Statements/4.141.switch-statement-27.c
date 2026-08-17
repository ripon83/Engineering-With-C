/*
 * Program: Switch Statement 27
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    switch (2 == 2)  // Select a branch based on the expression value
    {
        case 0:
            printf("Zero");  // Display output
            break;  // Exit the current switch or loop
        case 1:
            printf("One");  // Display output
            break;  // Exit the current switch or loop
        default:
            printf("Default");  // Display output
    }
    return 0;  // Indicate successful program termination
}
