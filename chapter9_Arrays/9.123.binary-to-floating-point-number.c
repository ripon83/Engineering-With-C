/*
 * Program: Binary To Floating Point Number
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <math.h>
double convert(int bin[], int n)
{
    int i=0;
    double f=0.0;
    for(i=0; i<n; i++)  // Iterate through array elements
    {
        f=f+bin[i]*pow(2,-(i+1));
    }
    return f;
}
int main()  // Main function: execution starts here
{
    //bin[]=0.110101
    int bin[50]={1, 1, 0, 1, 0, 1};
    int bits=sizeof(bin)/sizeof(bin[0]);
    double n=convert(bin, bits);
    printf("%lf", n);  // Display output
    return 0;  // Indicate successful program termination
}
