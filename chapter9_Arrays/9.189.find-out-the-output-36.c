/*
 * Program: Find Out The Output 36
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5};
    int n=sizeof(a)/sizeof(*a);
    printf("%d\t%d", n, a[n-1]);  // Display output
    return 0;  // Indicate successful program termination
}
