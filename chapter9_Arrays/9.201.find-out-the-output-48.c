/*
 * Program: Find Out The Output 48
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int binarySearch(int a[], int n, int key)
{
    int l=0, r=n-1;
    while(l<=r)  // Repeat while the condition remains true
    {
        int m=(l+r)/2;
        if(a[m]==key)  // Store a value in an array element
            return m;
        if(a[m]<key)
            l=m+1;
        else
            r=m-1;
    }
    return -1;
}
int main()  // Main function: execution starts here
{
    int a[]={10, 20, 30, 40, 50, 60, 70};
    printf("%d", binarySearch(a, 7, 50));  // Display output
    return 0;  // Indicate successful program termination
}
