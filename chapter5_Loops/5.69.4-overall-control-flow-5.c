/*
 * Program: 4 Overall Control Flow 5
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i, j, n=4;

    for(i=n; i>0; i--)             // Number of elements
    {
        for(j=n; j>i; j--)         // Print leading spaces
            printf("\t");  // Display output

        for(j=1; j<=i; j++)        // Print numbers
            printf("%d\t", j);  // Display output

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
