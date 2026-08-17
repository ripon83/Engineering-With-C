/*
 * Program: Break Statement
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    for (int i = 0; i < 1000; i++)  // Start or control a for loop
    {
        if (i == 10)
            break;  // Exit the nearest loop

        printf("%d\t", i);  // Display output
    }

    return 0;  // Indicate successful program termination
}
