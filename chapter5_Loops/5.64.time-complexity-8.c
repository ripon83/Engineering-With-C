/*
 * Program: Time Complexity 8
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n=5, i, j, c;

    for(i=n; i>0; i--)  // Start or control a for loop
    {
        for(j=i; j<n; j++)  // Start or control a for loop
            printf("  ");  // Display output

        c=1;                         // First coefficient

        for(j=1; j<=i; j++)  // Start or control a for loop
        {
            printf("%d   ", c);  // Display output
            c=c*(i-j)/j;
        }

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
