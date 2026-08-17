/*
 * Program: Loop Pattern 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n=5, i, j;

    for(i=1; i<=n; i++)                 // Number of rows
    {
        for(j=i; j<n; j++)              // Print spaces
        {
            printf("  ");  // Display output
        }

        for(j=1; j<=i; j++)             // Print stars
        {
            printf("* ");  // Display output
        }

        printf("\n");                   // Move to the next row
    }

    return 0;  // Indicate successful program termination
}
