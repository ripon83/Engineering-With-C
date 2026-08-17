/*
 * Program: Smallest Element
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int Smallest(int a[], int n) 
{
    int min=a[0];
    for(int i=1; i<n; i++)  // Iterate through array elements
        if(a[i]<min)
            min=a[i];
    return min;
}
int main()   // Main function: execution starts here
{
    int a[]={3, 7, 2, 8, -20, 10, 1, 5, 4, 6};
    int n=10;
    printf("%d", Smallest(a, n));  // Display output
    return 0;  // Indicate successful program termination
}
