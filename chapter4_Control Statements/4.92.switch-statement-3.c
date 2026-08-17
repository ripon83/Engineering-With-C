/*
 * Program: Switch Statement 3
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
        case 2:
        case 3:
            printf("The value is between 1 and 3.\n");  // Display output
            break;  // Exit the current switch or loop

        default:
            printf("The value is outside the range.\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
