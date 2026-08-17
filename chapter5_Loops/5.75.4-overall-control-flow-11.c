/*
 * Program: 4 Overall Control Flow 11
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int n=4, count=0, i, j, tmp;

    for(i=1; i<=n; i++)  // Start or control a for loop
    {
        if(i%2 != 0)              // Odd row: forward direction
        {
            for(j=1; j<=n; j++)  // Start or control a for loop
                printf("%d\t", ++count);  // Display output
        }
        else                      // Even row: reverse direction
        {
            tmp=count+n;

            for(j=1; j<=n; j++)  // Start or control a for loop
                printf("%d\t", tmp--);  // Display output

            count=count+n;
        }

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
