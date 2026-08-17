/*
 * Program: Array Searching 4
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int binarySearch(int a[], int n, int key)
{
    int l=0, r=n-1, mid;
    while(l<=r)  // Repeat while the condition remains true
    {
        mid=(l+r)/2;
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
    int a[]={10, 12, 23, 24, 35, 36, 47, 58, 69, 70};
    int key=47;
    int f=binarySearch(a, 10, key);
    if(f!=-1)
        printf("The item is found at %d", f);  // Display output
    else
        printf("The item is not found");  // Display output
    return 0;  // Indicate successful program termination
}
