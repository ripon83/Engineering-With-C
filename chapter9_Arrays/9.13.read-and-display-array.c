/*
 * Program: Read And Display Array
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[10], n=10, i;

    printf("Enter the array items:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        scanf("%d", &a[i]);  // Read input

    printf("The array is:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\n", a[i]);  // Display output

    return 0;  // Indicate successful program termination
}
