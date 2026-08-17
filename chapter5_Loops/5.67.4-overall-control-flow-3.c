/*
 * Program: 4 Overall Control Flow 3
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i, j, n=4;
    for(i=1; i<=n; i++)          // Number of rows
    {
        for(j=i; j>=1; j--)      // Print numbers in decreasing order
            printf("%d\t", j);  // Display output
        printf("\n");            // Print newline after each row
    }
    return 0;  // Indicate successful program termination
}
