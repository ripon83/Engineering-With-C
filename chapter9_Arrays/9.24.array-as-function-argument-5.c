/*
 * Program: Array As Function Argument 5
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void deletion(int a[], int n, int k)
{
    int i;
    for(i=k; i<n-1; i++)  // Iterate through array elements
        a[i]=a[i+1];  // Store a value in an array element
}
int main()  // Main function: execution starts here
{
    int a[100];
    int i, n=10, k=3;
    for(i=0; i<n; i++)  // Iterate through array elements
        a[i]=rand()%10;  // Store a value in an array element
    printf("The array:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    deletion(a, n, k);
    n--;
    printf("\nAfter deletion:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
