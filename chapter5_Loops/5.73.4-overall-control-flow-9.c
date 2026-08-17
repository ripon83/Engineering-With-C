/*
 * Program: 4 Overall Control Flow 9
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, n=4;

    for(i=1; i<=n; i++)  // Start or control a for loop
    {
        for(j=n-i; j>=0; j--)       // Print white spaces
            printf("\t");  // Display output

        for(j=1; j<=i; j++)         // Print increasing order
            printf("%d\t", j);  // Display output

        for(j=i-1; j>=1; j--)        // Print decreasing order
            printf("%d\t", j);  // Display output

        printf("\n");               // Move to the next row
    }

    for(i=n-1; i>=1; i--)             // Print the inverted part
    {
        for(j=n-i; j>=0; j--)  // Start or control a for loop
            printf("\t");  // Display output

        for(j=1; j<=i; j++)  // Start or control a for loop
            printf("%d\t", j);  // Display output

        for(j=i-1; j>=1; j--)  // Start or control a for loop
            printf("%d\t", j);  // Display output

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
