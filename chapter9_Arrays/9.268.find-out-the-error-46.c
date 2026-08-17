/*
 * Program: Find Out The Error 46
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void freq(int a[], int n)
{
    int f[10]={0};
    for(int i=0; i<n; i++)  // Iterate through array elements
        f[a[i]]++;
}
int main()  // Main function: execution starts here
{
    int a[]={1, 2, -1, 3, 2};
    freq(a, 5);
    return 0;  // Indicate successful program termination
}
