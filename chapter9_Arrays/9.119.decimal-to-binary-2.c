/*
 * Program: Decimal To Binary 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void Binary(int n, int bin[], int *i) 
{
    if (n>0) 
    {
        Binary(n/2, bin, i); 
        bin[(*i)++]=n&1;   // Store a value in an array element
    }
}
int main()   // Main function: execution starts here
{
    int n=28;
    int bin[64]={0}; 
    int bits=0;
    Binary(n, bin, &bits);
    for (int i=0; i<bits; i++)   // Iterate through array elements
        printf("%d", bin[i]);  // Display output
    return 0;  // Indicate successful program termination
}
