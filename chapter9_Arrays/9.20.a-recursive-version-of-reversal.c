/*
 * Program: A Recursive Version Of Reversal
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void rev(int a[], int l, int r)
{
    if(l>=r)
        return;
    int tmp=a[l];
    a[l]=a[r];  // Store a value in an array element
    a[r]=tmp;  // Store a value in an array element
    rev(a, l+1, r-1);
}
void reverse(int a[], int n)
{
    rev(a, 0, n-1);
}
int main()   // Main function: execution starts here
{
    int a[] = {10, 20, 30, 40, 50};
    int n=5;
    reverse(a, n);
    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
}
