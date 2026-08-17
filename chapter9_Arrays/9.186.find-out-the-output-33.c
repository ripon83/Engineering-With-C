/*
 * Program: Find Out The Output 33
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void foo(int a[], int n)
{
    for(int i=0; i<n/2; i++)  // Iterate through array elements
    {
        int tmp=a[i];
        a[i]=a[n-i-1];  // Store a value in an array element
        a[n-i-1]=tmp;  // Store a value in an array element
    }
}
int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5};
    foo(a, 5);
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
