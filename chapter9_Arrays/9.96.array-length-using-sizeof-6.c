/*
 * Program: Array Length Using Sizeof 6
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n;
    printf("Enter n: ");  // Display output
    scanf("%d", &n);  // Read input
    int a[n];
    printf("Bytes allocated: %zu\n", sizeof(a));  // Display output
    printf("Number of elements: %zu\n",  // Display output
           sizeof(a)/sizeof(a[0]));
    return 0;  // Indicate successful program termination
}
