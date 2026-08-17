/*
 * Program: When N 7
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n = 4, i = 0, j = 0;

    if (n > 0)
        goto here;  // Transfer control to the labeled statement

    for (i = 0; i < n; i++)  // Start or control a for loop
    {
        for (j = 0; j < n; j++)  // Start or control a for loop
        {
here:
            printf("%d %d\t", i, j);  // Display output
        }
        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
