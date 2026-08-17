/*
 * Program: 4 Overall Control Flow 6
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i, j, n=4;

    for(i=n; i>=1; i--)           // Number of rows in decreasing order
    {
        for(j=n-i; j>0; j--)      // Print leading spaces
            printf("\t");  // Display output

        for(j=1; j<=i; j++)       // Print numbers in increasing order
            printf("%d\t", j);  // Display output

        printf("\n");             // Print newline after each row
    }
    return 0;  // Indicate successful program termination
}
