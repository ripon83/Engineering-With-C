/*
 * Program: Total Number Of Elements
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n = 6, k, i, j;

    k = n * (n - 1) / 2 + 1;

    for(i = n; i > 0; i--)  // Start or control a for loop
    {
        for(j = 1; j <= i; j++)  // Start or control a for loop
        {
            printf("%d\t", k++);  // Display output
        }

        k = k - 2 * i + 1;
        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
