/*
 * Program: 4 Overall Control Flow 8
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, n=4;

    for(i=n; i>=1; i--)             // Number of rows
    {
        for(j=n-i; j>=0; j--)       // Print white spaces
            printf("\t");  // Display output

        for(j=1; j<=i; j++)         // Left side
            printf("%d\t", j);  // Display output

        for(j=i-1; j>=1; j--)       // Right side
            printf("%d\t", j);  // Display output

        printf("\n");               // Move to the next row
    }

    return 0;  // Indicate successful program termination
}
