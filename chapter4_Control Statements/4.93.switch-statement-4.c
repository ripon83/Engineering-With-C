/*
 * Program: Switch Statement 4
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int n = 10;

    switch (n)  // Select a branch based on the expression value
    {
        case 1:
            printf("One\n");  // Display output
            break;  // Exit the current switch or loop

        case 2:
            printf("Two\n");  // Display output
            break;  // Exit the current switch or loop

        case 3:
            printf("Three\n");  // Display output
            break;  // Exit the current switch or loop

        default:
            printf("Other value\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
