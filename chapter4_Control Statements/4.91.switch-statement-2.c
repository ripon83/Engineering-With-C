/*
 * Program: Switch Statement 2
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int n = 1;

    switch (n)  // Select a branch based on the expression value
    {
        case 1:
            printf("Never insult other people.\n");  // Display output

        case 2:
            printf("You have to face the result of what you have done.\n");  // Display output
            break;  // Exit the current switch or loop

        default:
            printf("Every action has consequences.\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
