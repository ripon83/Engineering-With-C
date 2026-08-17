/*
 * Program: Pointer And Array 22
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i, n=5;
    int a[5]={1, 2, 3, 4, 5};
    int (*p)[5]=&a;
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", (*p)[i]);  // Display output
    return 0;  // Indicate successful program termination
}
