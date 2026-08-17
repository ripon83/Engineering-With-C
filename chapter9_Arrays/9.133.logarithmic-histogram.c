/*
 * Program: Logarithmic Histogram
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <math.h>
void vertical(int a[], int n)
{
    int b[10], c[10];
    int i, j;

    for(i=0; i<n; i++)  // Iterate through array elements
        c[i]=(int)log2(a[i]);  // Store a value in an array element

    int l=c[0];

    for(i=1; i<n; i++)  // Iterate through array elements
        if(l<c[i])
            l=c[i];

    for(i=0; i<n; i++)  // Iterate through array elements
        b[i]=c[i];  // Store a value in an array element

    int largest=l;

    for(i=0; i<largest; i++)  // Iterate through array elements
    {
        for(j=0; j<n; j++)  // Iterate through array elements
        {
            if(l>b[j])
                printf("\t");  // Display output
            else
                printf("||\t");  // Display output
        }

        for(j=0; j<n; j++)  // Iterate through array elements
        {
            if(l==b[j])
                b[j]--;
        }

        l--;
        printf("\n");  // Display output
    }

    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output

    printf("\n");  // Display output
}

int main()  // Main function: execution starts here
{
    int a[]={125, 1029, 72, 2654, 8};
    vertical(a, 5);
    return 0;  // Indicate successful program termination
}
