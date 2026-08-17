/*
 * Program: Array Length Using Sizeof 4
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n;
    printf("Enter n:");  // Display output
    scanf("%d", &n);  // Read input
    int a[n];
    int m=sizeof(a)/sizeof(a[0]);
    printf("\nAllocated size is: %d", m);  // Display output
    return 0;  // Indicate successful program termination
}
