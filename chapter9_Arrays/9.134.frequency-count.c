/*
 * Program: Frequency Count
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

void freq(int a[], int n, int aux[], int k)
{
    int i;
    for(i=0; i<=k; i++)  // Iterate through array elements
        aux[i]=0;  // Store a value in an array element

    for(i=0; i<n; i++)  // Iterate through array elements
        aux[a[i]]++;
}

void show(int aux[], int j, int k)
{
    for(int i=j; i<=k; i++)  // Iterate through array elements
        printf("Frequency of %d=%d\n", i, aux[i]);  // Display output
}

int main()  // Main function: execution starts here
{
    int a[10000], n=10000, k=10, aux[100], i;
    populate(a, n, 0, k);
    freq(a, n, aux, k);
    show(aux, 0, k);
    return 0;  // Indicate successful program termination
}
