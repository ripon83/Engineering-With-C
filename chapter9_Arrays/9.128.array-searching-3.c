/*
 * Program: Array Searching 3
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int search(int arr[], int i, int key) 
{
    if(i<0)
        return -1;
    if(arr[i]==key)  // Store a value in an array element
        return i;
    return search(arr, i-1, key);
}
int main()   // Main function: execution starts here
{
    int a[]={5, 9, 3, 7, 2, 4, 1, 8, 6, 0};
    int n=10, key=6;
    printf("Location of %d is %d\n",  // Display output
           key, search(a, n-1, key));
    key=15;
    printf("Location of %d is %d",  // Display output
           key, search(a, n-1, key));
    return 0;  // Indicate successful program termination
}
