/*
 * Program: 4 Overall Control Flow 4
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i, j, n=4;
    for(i=1; i<=n; i++)  // Start or control a for loop
    {
        for(j=n-i; j>=0; j--)       // Print leading spaces
            printf("\t");  // Display output

        for(j=1; j<=i; j++)         // Print left half
            printf("%d\t", j);  // Display output

        for(j=i-1; j>=1; j--)       // Print right half
            printf("%d\t", j);  // Display output

        printf("\n");  // Display output
    }
    return 0;  // Indicate successful program termination
}
