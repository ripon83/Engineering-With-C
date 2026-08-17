/*
 * Program: Restricting The Range From 50 To 100
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int i, n=10;
    int a[10];
    for(i=0; i<n; i++)  // Iterate through array elements
        a[i]=rand()%51+50;  // Store a value in an array element
    printf("The array is:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
