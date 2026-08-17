/*
 * Program: Switch Statement 5
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()  // Main function: program execution starts here
{
    srand(time(NULL));

    int n = rand() % 40;

    switch(n)  // Select a branch based on the expression value
    {
        case 0 ... 10:
            printf("Between 0 and 10");  // Display output
            break;  // Exit the current switch or loop

        case 11 ... 20:
            printf("Between 11 and 20");  // Display output
            break;  // Exit the current switch or loop

        case 21 ... 30:
            printf("Between 21 and 30");  // Display output
            break;  // Exit the current switch or loop

        default:
            printf("Out of the range");  // Display output
    }

    return 0;  // Indicate successful program termination
}
