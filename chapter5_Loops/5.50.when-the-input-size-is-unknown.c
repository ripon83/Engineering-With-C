/*
 * Program: When The Input Size Is Unknown
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n, i, j;

    printf("Enter the number of rows: ");  // Display output
    scanf("%d", &n);  // Read input

    for(i=1; i<=n; i++)  // Start or control a for loop
    {
        for(j=i; j<n; j++)  // Start or control a for loop
        {
            printf("  ");  // Display output
        }

        for(j=1; j<=i; j++)  // Start or control a for loop
        {
            printf("* ");  // Display output
        }

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
