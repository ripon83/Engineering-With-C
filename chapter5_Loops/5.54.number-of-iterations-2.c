/*
 * Program: Number Of Iterations 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, n = 5;

    // Increasing part
    for(i = 1; i <= n; i++)  // Start or control a for loop
    {
        for(j = 1; j <= i; j++)  // Start or control a for loop
            printf("%d\t", j);  // Display output

        printf("\n");  // Display output
    }

    // Decreasing part
    for(i = n - 1; i > 0; i--)  // Start or control a for loop
    {
        for(j = 1; j <= i; j++)  // Start or control a for loop
            printf("%d\t", j);  // Display output

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
