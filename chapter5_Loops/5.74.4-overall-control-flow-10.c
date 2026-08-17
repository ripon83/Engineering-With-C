/*
 * Program: 4 Overall Control Flow 10
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i, j, n=6, num, gap;

    for(i=1; i<=n; i++)  // Start or control a for loop
    {
        num=i;             // First number of the row
        gap=n-1;           // Initial gap

        for(j=1; j<=i; j++)  // Start or control a for loop
        {
            printf("%d\t", num);  // Display output
            num=num+gap;   // Generate the next number
            gap--;         // Decrease the gap
        }

        printf("\n");  // Display output
    }

    return 0;  // Indicate successful program termination
}
