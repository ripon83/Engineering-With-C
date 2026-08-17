/*
 * Program: 4 Overall Control Flow 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, n=4;

    for(i=1; i<=n; i++)          // Number of rows
    {
        for(j=n-i; j>0; j--)     // Print white spaces
            printf("\t");  // Display output

        for(j=1; j<=i; j++)      // Print numbers
            printf("%d\t", j);  // Display output

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
