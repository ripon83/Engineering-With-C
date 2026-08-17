/*
 * Program: Find Out The Output 58
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5};
    int right=a[4];
    for(int i=4; i>0; i--)  // Iterate through array elements
        a[i]=a[i-1];  // Store a value in an array element
    a[0]=right;  // Store a value in an array element
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
