/*
 * Program: Array As Function Argument 8
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void *allocate(long size)
{
    if(size<=0)
    {
        printf("No allocation!");  // Display output
        return NULL;
    }
    return malloc(size);  // Allocate memory dynamically
}
int main()  // Main function: execution starts here
{
    int n=10;
    int *p=(int *)allocate(n*sizeof(int));
    for(int i=0; i<n; i++)  // Iterate through array elements
        p[i]=i+11;  // Store a value in an array element
    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", p[i]);  // Display output

    return 0;  // Indicate successful program termination
}
