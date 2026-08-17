/*
 * Program: Vertical Histogram
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void vertical(int a[], int n)
{
    int b[10];
    int i, j;
    int l=a[0];
    for(i=1; i<n; i++)  // Iterate through array elements
        if(l<a[i])
            l=a[i];
    for(i=0; i<n; i++)  // Iterate through array elements
        b[i]=a[i];  // Store a value in an array element
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
    int a[]={5, 9, 7, 6, 8};
    vertical(a, 5);
    return 0;  // Indicate successful program termination
}
