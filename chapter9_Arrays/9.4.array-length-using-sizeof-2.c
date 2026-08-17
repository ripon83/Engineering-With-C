/*
 * Program: Array Length Using Sizeof 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[10]={10, 12, 32, 24, 35};
    int i, n;
    n=sizeof(a)/sizeof(a[0]);
    printf("The total length: %d\n", n);  // Display output
    return 0;  // Indicate successful program termination
}
