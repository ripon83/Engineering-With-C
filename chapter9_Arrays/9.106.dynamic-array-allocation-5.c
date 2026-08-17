/*
 * Program: Dynamic Array Allocation 5
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int i, n=5;
    int *arr=NULL;
    
    //Some codes 
    
    for(i=0; i<n; i++)  // Iterate through array elements
        arr=(int *)malloc(n*sizeof(int));  //Memory leak
    return 0;  // Indicate successful program termination
}
