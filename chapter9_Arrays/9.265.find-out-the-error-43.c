/*
 * Program: Find Out The Error 43
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void reverse(int a[], int n)
{
    for(int i=0, j=n; i<j; i++, j--)  // Iterate through array elements
    {
        int tmp=a[i];
        a[i]=a[j];  // Store a value in an array element
        a[j]=tmp;  // Store a value in an array element
    }
}
int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5};
    reverse(a, 5);
    return 0;  // Indicate successful program termination
}
