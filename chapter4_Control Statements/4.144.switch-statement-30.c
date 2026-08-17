/*
 * Program: Switch Statement 30
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int n = 8;
    switch (n >> 1)  // Select a branch based on the expression value
    {
        case 4:
            printf("Four");  // Display output
            break;  // Exit the current switch or loop
        case 8:
            printf("Eight");  // Display output
            break;  // Exit the current switch or loop
        default:
            printf("Default");  // Display output
    }
    return 0;  // Indicate successful program termination
}
