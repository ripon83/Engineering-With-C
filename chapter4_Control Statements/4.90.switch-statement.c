/*
 * Program: Switch Statement
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
            printf("Love what you are doing, but do not do what you love.\n");  // Display output
            break;  // Exit the current switch or loop

        case 2:
            printf("Hard work always pays off, whatever you do.\n");  // Display output
            break;  // Exit the current switch or loop

        case 3:
            printf("Life is short, live it. Fear is natural, face it.\n");  // Display output
            break;  // Exit the current switch or loop

        case 4:
            printf("You do not have to be great to start.\n");  // Display output
            break;  // Exit the current switch or loop

        default:
            printf("Wake up and chase your dreams.\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
