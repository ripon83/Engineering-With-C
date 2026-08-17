/*
 * Program: Frequency Count 4
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populate(int a[], int n, int k)
{
    for(int i=0; i<n; i++)  // Iterate through array elements
        a[i]=rand()%k;  // Store a value in an array element
}

void freq(int a[], int n, int b[], int k)
{
    int i;

    for(i=0; i<k; i++)  // Iterate through array elements
        b[i]=0;  // Store a value in an array element

    for(i=0; i<n; i++)  // Iterate through array elements
        b[a[i]]++;

    for(i=0; i<n; i++)  // Iterate through array elements
    {
        if(b[a[i]]>=0)
        {
            printf("%d=%d\n", a[i], b[a[i]]);  // Display output
            b[a[i]]=-1;
        }
    }
}

int main()  // Main function: execution starts here
{
    int a[20], n=20, k=7, b[11];

    populate(a, n, k);

    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output

    printf("\n\n");  // Display output

    freq(a, n, b, k);

    return 0;  // Indicate successful program termination
}
