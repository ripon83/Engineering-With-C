/*
 * Program: Array As Function Argument
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>

void populate(int a[], int n, int min, int max)
{
    for(int i=0; i<n; i++)   //O(n)
        a[i]=rand()%(max-min+1)+min;  // Store a value in an array element
}

int main()  // Main function: execution starts here
{
    int i, n=10, max=30, min=20;
    int a[10];

    populate(a, n, min, max);

    printf("The array is:\n");  // Display output
    for(i=0; i<n; i++)   //O(n)
        printf("%d\t", a[i]);  // Display output

    return 0;  // Indicate successful program termination
}
