/*
 * Program: Pointer And Array 3
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int array[5]={1, 2, 3, 4, 5};
    int i, n=5;
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("array[%d]=%d\n", i, *(array+i));  // Display output
    return 0;  // Indicate successful program termination
}
