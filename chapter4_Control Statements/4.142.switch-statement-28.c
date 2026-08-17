/*
 * Program: Switch Statement 28
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    switch (1, 2, 3)  // Select a branch based on the expression value
    {
        case 1:
            printf("One");  // Display output
            break;  // Exit the current switch or loop
        case 2:
            printf("Two");  // Display output
            break;  // Exit the current switch or loop
        case 3:
            printf("Three");  // Display output
            break;  // Exit the current switch or loop
        default:
            printf("Default");  // Display output
    }
    return 0;  // Indicate successful program termination
}
