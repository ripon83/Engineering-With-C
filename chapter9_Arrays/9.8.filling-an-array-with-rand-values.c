/*
 * Program: Filling An Array With Rand Values
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int i, n=1000;
    int a[1000];
    for(i=0; i<n; i++)   //O(n)
        a[i]=rand();  // Store a value in an array element
    for(i=0; i<n; i++)   //O(n)
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
