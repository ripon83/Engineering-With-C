/*
 * Program: Array As Function Argument 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int a[100];
    int i, n=10, k=3;
    for(i=0; i<n; i++)  // Iterate through array elements
        a[i]=rand()%10;  // Store a value in an array element
    printf("The array:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    n++;
    for(i=n; i>=k; i--)  // Iterate through array elements
        a[i]=a[i-1];  // Store a value in an array element
    a[i]=1234;  // Store a value in an array element
    printf("\nAfter insertion:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
