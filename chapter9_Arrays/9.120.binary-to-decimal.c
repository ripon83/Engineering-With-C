/*
 * Program: Binary To Decimal
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
long int toDecimal(int bin[], int n)
{
    int i, j, sum=0;
    for(i=0, j=n-1; i<n; i++, j--)  // Iterate through array elements
    {
        sum+=bin[i]*(1L<<j);
    }
    return sum;
}
int main()  // Main function: execution starts here
{
    int n=5;
    int bin[64]={1, 1, 1, 0, 0};
    printf("%ld", toDecimal(bin, n));  // Display output
    return 0;  // Indicate successful program termination
}
