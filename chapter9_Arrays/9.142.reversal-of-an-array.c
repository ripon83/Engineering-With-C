/*
 * Program: Reversal Of An Array
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>

void swap(int *x, int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}

void reverse(int a[], int p, int q)
{
    for(int i=p, j=q; i<j; i++, j--)  // Iterate through array elements
        swap(&a[i], &a[j]);
}

void reversal(int a[], int n, int k)
{
    int i;

    for(i=0; i+k<=n; i=i+k)  // Iterate through array elements
        reverse(a, i, i+k-1);

    if(i<n)
        reverse(a, i, n-1);
}

int main()  // Main function: execution starts here
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,
             12,13,14,15,16,17,18,19,20,21,22};

    int k=5, n=22;

    reversal(a, n, k);

    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output

    return 0;  // Indicate successful program termination
}
