/*
 * Program: Array Searching 5
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int binarySearch(int arr[], int left, int right, int x) 
{
    if(left>right) 
        return -1;

    int mid=(left+right)/2; 

    if(arr[mid]==x)   // Store a value in an array element
        return mid;

    if(arr[mid]<x) 
        return binarySearch(arr, mid+1, right, x);

    return binarySearch(arr, left, mid-1, x);
}
int main()   // Main function: execution starts here
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int n=10, key=20;
    printf("%d", binarySearch(a, 0, n-1, key));  // Display output
    return 0;  // Indicate successful program termination
}
