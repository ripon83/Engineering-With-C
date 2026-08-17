/*
 * Program: Find Out The Error 45
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int binarySearch(int a[], int n, int key)
{
    int l=0, r=n;
    while(l<=r)  // Repeat while the condition remains true
    {
        int mid=(l+r)/2;
        if(a[mid]==key)  // Store a value in an array element
            return mid;
        if(a[mid]<key)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}
int main()  // Main function: execution starts here
{
    int a[]={10,20,30,40,50};
    printf("%d", binarySearch(a, 5, 100));  // Display output
    return 0;  // Indicate successful program termination
}
