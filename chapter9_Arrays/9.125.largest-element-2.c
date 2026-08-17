/*
 * Program: Largest Element 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int Largest(int a[], int n) 
{
    if(n==0)
        return a[0];
    int max=Largest(a, n-1);
    return (a[n]>max) ? a[n] : max;
}
int main()   // Main function: execution starts here
{
    int a[]={3, 7, 2, 8, -20, 10, 1, 5, 4, 6};
    int n=10;
    printf("%d", Largest(a, n-1));  // Display output
    return 0;  // Indicate successful program termination
}
