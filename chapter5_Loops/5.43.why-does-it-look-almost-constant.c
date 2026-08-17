/*
 * Program: Why Does It Look Almost Constant
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
#include <stdlib.h>

int main()  // Main function: execution starts here
{
    long i, j, counter=0, n=rand();

    for(i=0; i<n; i++)                // Time complexity is O(n)
    {
        for(j=0; j<=i; j++)           // Depends on i
        {
            counter++;
        }
    }

    printf("The body of the loop is executed %ld times\n", counter);  // Display output
    return 0;  // Indicate successful program termination
}
