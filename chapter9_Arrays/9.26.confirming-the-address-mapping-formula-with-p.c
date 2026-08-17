/*
 * Program: Confirming The Address Mapping Formula With P
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={1, 2, 3, 4, 5};
    int i, n=5;
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("a[%d]=%p\n", i, &a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
