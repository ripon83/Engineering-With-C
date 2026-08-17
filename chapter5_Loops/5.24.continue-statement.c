/*
 * Program: Continue Statement
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, n = 20;

    for (i = 1; i <= n; i++)  // Start or control a for loop
    {
        if (i % 2 == 0)
            continue;  // Skip to the next iteration

        printf("%d\t", i);  // Display output
    }

    return 0;  // Indicate successful program termination
}
