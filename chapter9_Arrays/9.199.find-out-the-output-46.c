/*
 * Program: Find Out The Output 46
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5};
    for(int i=1; i<5; i++)  // Iterate through array elements
        a[i-1]=a[i];  // Store a value in an array element
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
