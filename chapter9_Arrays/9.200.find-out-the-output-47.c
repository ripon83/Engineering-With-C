/*
 * Program: Find Out The Output 47
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int search(int a[], int n, int key)
{
    for(int i=0; i<n; i++)  // Iterate through array elements
        if(a[i]==key)  // Store a value in an array element
            return i;
    return -1;
}
int main()  // Main function: execution starts here
{
    int a[]={5, 8, 2, 8, 4};
    printf("%d", search(a, 5, 8));  // Display output
    return 0;  // Indicate successful program termination
}
