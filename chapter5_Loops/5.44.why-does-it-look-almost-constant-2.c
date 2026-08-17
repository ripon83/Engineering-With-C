/*
 * Program: Why Does It Look Almost Constant 2
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>
#include <stdlib.h>

int main()  // Main function: execution starts here
{
    int i, j;
    long int counter=0, n=rand();

    for(i=0; i<n; i++)  // Start or control a for loop
        for(j=i; j<n; j++)  // Start or control a for loop
            counter++;

    printf("The body of the loops is executed %ld times\n", counter);  // Display output
    return 0;  // Indicate successful program termination
}
