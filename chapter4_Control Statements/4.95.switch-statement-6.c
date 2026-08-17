/*
 * Program: Switch Statement 6
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#include <stdlib.h>

int main()  // Main function: program execution starts here
{
    int n = rand();

    switch(n & 1)  // Select a branch based on the expression value
    {
        case 0:
            printf("%d is an even number", n);  // Display output
            break;  // Exit the current switch or loop

        case 1:
            printf("%d is an odd number", n);  // Display output
            break;  // Exit the current switch or loop

        default:
            printf("%d is exceptional", n);  // Display output
    }

    return 0;  // Indicate successful program termination
}
