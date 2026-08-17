/*
 * Program: Array As Function Argument 3
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void insert(int a[], int n, int k, int i)
{
    int j;
    for(j=n; j>=i; j--) //O(n-i)=O(n)
        a[j]=a[j-1];  // Store a value in an array element
    a[j]=k;  // Store a value in an array element
}
int main()  // Main function: execution starts here
{
    int a[100], i, n=10, k=3;
    for(i=0; i<n; i++)  // Iterate through array elements
        a[i]=rand()%10;  // Store a value in an array element
    printf("The array:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    n++;
    insert(a, n, 1234, 3);
    n++;
    insert(a, n, 456, 5);
    printf("\nAfter insertion:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
