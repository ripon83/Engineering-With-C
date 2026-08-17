/*
 * Program: Read And Display Array 3
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n;
    scanf("%d", &n);  // Read input
    int a[n];

    for(int i=0; i<n; i++)  // Iterate through array elements
        a[i]=i;  // Store a value in an array element

    printf("%d\n", a[n]);   // Out of bounds!

    return 0;  // Indicate successful program termination
}
