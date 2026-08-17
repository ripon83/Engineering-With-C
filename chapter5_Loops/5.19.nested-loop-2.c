/*
 * Program: Nested Loop 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j;
    int m = 3, n = 4;
    int count = 0;

    for (i = 0; i < m; i++)  // Start or control a for loop
    {
        for (j = 0; j < n; j++)  // Start or control a for loop
        {
            count++;
            printf("%d\t", count);  // Display output
        }

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
