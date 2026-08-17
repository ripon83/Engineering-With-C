/*
 * Program: Demonstration Reading Out Of Bounds
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i;
    int a[]={10, 12, 32, 24};
    for(i=0; i<10; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
