/*
 * Program: Time Complexity 3
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n=4, i, j=0, row=1;
    int total=n*(n+1)/2;

    for(i=1; i<=total; i++)  // Start or control a for loop
    {
        printf("%d\t", i);  // Display output
        j++;

        if(j==row)
        {
            printf("\n");  // Display output
            row++;
            j=0;
        }
    }
    return 0;  // Indicate successful program termination
}
