/*
 * Program: Find Out The Output 49
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[]={1, 1, 2, 3, 3, 3};
    int f[4]={0};
    for(int i=0; i<6; i++)  // Iterate through array elements
        f[a[i]]++;
    printf("%d\t%d\t%d", f[1], f[2], f[3]);  // Display output
    return 0;  // Indicate successful program termination
}
