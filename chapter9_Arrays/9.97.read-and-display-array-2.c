/*
 * Program: Read And Display Array 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n, i;
    printf("Enter n: ");  // Display output
    scanf("%d", &n);  // Read input
    int a[n];

    for(i=0; i<n; i++)  // Iterate through array elements
        a[i]=(i+1)*10;  // Store a value in an array element

    printf("Array contents:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output

    return 0;  // Indicate successful program termination
}
