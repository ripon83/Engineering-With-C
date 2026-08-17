/*
 * Program: Dynamic Array Allocation 8
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int *enlarge(int *a, int n, int m)
{   
    int *b=(int *)malloc(sizeof(int)*(n+m));  // Allocate memory dynamically
    for(int i=0; i<n; i++) //O(n)
    {
        b[i]=a[i];  // Store a value in an array element
    }
    free(a);  // Release dynamically allocated memory
    return b;
}
int main()  // Main function: execution starts here
{
    int i, n=10;
    int *arr=(int *)malloc(n*sizeof(int));  // Allocate memory dynamically
    for(i=0; i<n; i++)  // Iterate through array elements
        arr[i]=i+1;  // Store a value in an array element
    printf("The array is:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", arr[i]);  // Display output
    int m=5;
    arr=enlarge(arr, n, m);
    for(i=n; i<n+m; i++)  // Iterate through array elements
        arr[i]=i+1;  // Store a value in an array element
    printf("\nAfter incrementing the array size:\n");  // Display output
    for(i=0; i<n+m; i++)  // Iterate through array elements
        printf("%d\t", arr[i]);  // Display output
    return 0;  // Indicate successful program termination
}
