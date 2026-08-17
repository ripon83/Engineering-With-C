/*
 * Program: While Loop 3
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i = 0;

    for (;;)  // Start or control a for loop
    {
        printf("%d\t", i);  // Display output
        i++;

        if (i == 10)
            break;  // Exit the nearest loop
    }

    return 0;  // Indicate successful program termination
}
