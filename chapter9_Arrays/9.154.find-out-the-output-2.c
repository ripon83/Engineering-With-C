/*
 * Program: Find Out The Output 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    int *p=a;
    int n=5;
    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", *p++);  // Display output
    return 0;  // Indicate successful program termination
}
