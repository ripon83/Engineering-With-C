/*
 * Program: Break Statement 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, m = 5, n = 6;

    for (i = 0; i < m; i++)  // Start or control a for loop
    {
        if (i == 3)
            break;  // Exit the nearest loop

        for (j = 0; j < n; j++)  // Start or control a for loop
        {
            printf("%d %d\t", i, j);  // Display output
        }

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
