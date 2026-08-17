/*
 * Program: Pointer And Array 25
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>

void printArray(int (*p)[5])
{
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", (*p)[i]);  // Display output
}

int main()  // Main function: execution starts here
{
    int a[5]={1, 2, 3, 4, 5};
    printArray(&a);
    return 0;  // Indicate successful program termination
}
