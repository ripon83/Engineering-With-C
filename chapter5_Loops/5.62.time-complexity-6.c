/*
 * Program: Time Complexity 6
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n=4, i, j=1, row=1, k=1;
    int total=n*n;

    for(i=1; i<=total; i++, j++)  // Start or control a for loop
    {
        printf("%d\t", j);  // Display output

        if(j>=row)
        {
            printf("\n");  // Display output

            if(row==n)
                k=-1;

            row+=k;
            j=0;
        }
    }
    return 0;  // Indicate successful program termination
}
