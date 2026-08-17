/*
 * Program: Loop Pattern 4
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, n=5;

    for(i=1; i<=n; i++)              // Number of rows
    {
        for(j=1; j<=i; j++)          // Print the numbers
            printf("%d\t", j);  // Display output

        printf("\n");                // Move to the next row
    }

    return 0;  // Indicate successful program termination
}
