/*
 * Program: Find Out The Output 32
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void foo(int a[], int n)
{
    for(int i=0; i<n; i++)  // Iterate through array elements
        a[i]=a[i]*2;  // Store a value in an array element
}
int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5};
    foo(a, 5);
    printf("%d\t%d", a[1], a[4]);  // Display output
    return 0;  // Indicate successful program termination
}
