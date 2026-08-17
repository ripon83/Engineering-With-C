/*
 * Program: Decimal To Binary
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void reverse(int a[], int size)
{
    int tmp, i, j;
    for(i=0, j=size-1; i<j; i++, j--)  //cost=size/2
    {
        tmp=a[i];
        a[i]=a[j];  // Store a value in an array element
        a[j]=tmp;  // Store a value in an array element
    }
}
void toBinary(int n, int bin[], int *size)
{
    int i;
    for(i=0; n; n=n>>1, i++)  // Iterate through array elements
    {
        bin[i]=n&1;  // Store a value in an array element
    }
    reverse(bin, i);
    *size=i;
}
int main()  // Main function: execution starts here
{
    int n=28, bits;
    int bin[32];
    toBinary(n, bin, &bits);
    for(int i=0; i<bits; i++)  // Iterate through array elements
        printf("%d", bin[i]);  // Display output
    return 0;  // Indicate successful program termination
}
