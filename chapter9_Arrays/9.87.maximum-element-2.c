/*
 * Program: Maximum Element 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>

int findMax(void *arr, int n)
{
    int *p=(int *)arr;
    int max=p[0];

    for(int i=1; i<n; i++)  // Iterate through array elements
        if(p[i]>max)
            max=p[i];

    return max;
}

int main()  // Main function: execution starts here
{
    int a[6]={23, 87, 12, 65, 90, 34};

    printf("Max = %d\n", findMax(a, 6));  // Display output

    return 0;  // Indicate successful program termination
}
