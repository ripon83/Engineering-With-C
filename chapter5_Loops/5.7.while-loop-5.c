/*
 * Program: While Loop 5
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i = 0;

    while (1)  // Check or control a while loop
    {
        printf("%d\t", i);  // Display output
        i++;

        if (i == 10)
            break;  // Exit the nearest loop
    }

    return 0;  // Indicate successful program termination
}
