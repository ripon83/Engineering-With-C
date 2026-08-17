/*
 * Program: Total Number Of Iterations
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n = 6, k = 1, i, j;

    for(i = 1; i <= n; i++)             // Number of rows
    {
        for(j = 1; j <= i; j++)         // Number of elements in each row
        {
            printf("%d\t", k++);  // Display output
        }

        printf("\n");                   // Move to the next row
    }

    return 0;  // Indicate successful program termination
}
