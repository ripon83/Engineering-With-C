/*
 * Program: Time Complexity 4
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n=5, i, j=1, row=1;
    int total=n*(n+1)/2;

    for(i=1; i<=total; i++, j++)  // Start or control a for loop
    {
        printf("%d\t", j);  // Display output

        if(i==row*(row+1)/2)
        {
            printf("\n");  // Display output
            row++;
            j=0;
        }
    }
    return 0;  // Indicate successful program termination
}
