/*
 * Program: Switch Statement 10
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include<stdio.h>
int main()  // Main function: program execution starts here
{
    int n=1;
    switch(n++)  // Select a branch based on the expression value
    {
        case 1:
            printf("Case 1\n");  // Display output
            break;  // Exit the current switch or loop
        case 2:
            printf("Case 2\n");  // Display output
            break;  // Exit the current switch or loop
        default:
            printf("Default\n");  // Display output
    }
    return 0;  // Indicate successful program termination
}
