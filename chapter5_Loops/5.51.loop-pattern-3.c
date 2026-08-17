/*
 * Program: Loop Pattern 3
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n=5, i, j;

    /* Upper half */
    for(i=1; i<=n; i++)  // Start or control a for loop
    {
        for(j=i; j<n; j++)  // Start or control a for loop
            printf("  ");  // Display output

        for(j=1; j<=i; j++)  // Start or control a for loop
            printf("* ");  // Display output

        printf("\n");  // Display output
    }

    /* Lower half */
    for(i=n-1; i>=1; i--)  // Start or control a for loop
    {
        for(j=i; j<n; j++)  // Start or control a for loop
            printf("  ");  // Display output

        for(j=1; j<=i; j++)  // Start or control a for loop
            printf("* ");  // Display output

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
