/*
 * Program: Pointer And Array 4
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={1, 2, 3, 4, 5};
    int *p=a;
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", *p++);  // Display output
    return 0;  // Indicate successful program termination
}
