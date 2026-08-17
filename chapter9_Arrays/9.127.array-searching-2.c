/*
 * Program: Array Searching 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int a[]={9, 3, 0, 1, 6, 8, 2, 7, 5, 4};
    int i, flag=0, n=10;
    int key=rand()%29;
    for(i=0; i<n; i++)  // Iterate through array elements
    {
        if(a[i]==key)  // Store a value in an array element
        {
            flag=1;
            break;
        }
    }
    if(flag)
        printf("The item %d is found at %d", key, i);  // Display output
    else
        printf("The item %d is not found", key);  // Display output
}
