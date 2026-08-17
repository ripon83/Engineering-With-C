/*
 * Program: Mistake 3 Providing More Initializer Values Than The Declare
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n=9, i;
    int a[3]={1, 2, 3, 4, 5, 6, 7, 8, 9};  // Error
    for(i=0; i<n; i++)  // Iterate through array elements
        a[i]=i+1;  // Store a value in an array element
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
