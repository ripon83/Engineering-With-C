/*
 * Program: Frequency Count 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populate(int a[], int n, int min, int max)
{
    srand(clock());
    for(int i=0; i<n; i++)  // Iterate through array elements
        a[i]=(rand()%(max-min+1))+min;  // Store a value in an array element
}

void freq(int a[], int n, int paux[], int naux[], int k)
{
    int i;
    for(i=0; i<=k; i++)  // Iterate through array elements
    {
        paux[i]=0;  // Store a value in an array element
        naux[i]=0;  // Store a value in an array element
    }

    for(i=0; i<n; i++)  // Iterate through array elements
    {
        if(a[i]>=0)
            paux[a[i]]++;
        else
            naux[-a[i]]++;
    }
}

void show(int paux[], int naux[], int k)
{
    printf("\nFrequencies for positive numbers:\n");  // Display output
    for(int i=0; i<=k; i++)  // Iterate through array elements
        printf("Frequency of %d=%d\n", i, paux[i]);  // Display output

    printf("\nFrequencies for negative numbers:\n");  // Display output
    for(int i=1; i<=k; i++)  // Iterate through array elements
        printf("Frequency of -%d=%d\n", i, naux[i]);  // Display output
}

int main()  // Main function: execution starts here
{
    int a[10000], n=10000, k=10;
    int paux[100], naux[100];

    populate(a, n, -k, k);
    freq(a, n, paux, naux, k);
    show(paux, naux, k);

    return 0;  // Indicate successful program termination
}
