/*
 * Program: Find Out The Output 52
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void reverse(int a[], int n)
{
    for(int i=0, j=n-1; i<j; i++, j--)  // Iterate through array elements
    {
        int t=a[i];
        a[i]=a[j];  // Store a value in an array element
        a[j]=t;  // Store a value in an array element
    }
}
int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5, 6};
    reverse(a, 6);
    printf("%d\t%d\t%d", a[0], a[2], a[5]);  // Display output
    return 0;  // Indicate successful program termination
}
