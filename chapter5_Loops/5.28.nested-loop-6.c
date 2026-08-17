/*
 * Program: Nested Loop 6
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, m = 4, n = 5;

    for (i = 0; i < n; i++)  // Start or control a for loop
    {
        for (j = 0; j < m; j++)  // Start or control a for loop
        {
            printf("%d %d\t", i, j);  // Display output

            if (i == 2 && j == 3)
                goto here;  // Transfer control to the labeled statement
        }

        printf("\n");  // Display output
    }

here:
    printf("\nOut of the loops");  // Display output

    return 0;  // Indicate successful program termination
}
