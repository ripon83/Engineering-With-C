/*
 * Program: Find Out The Output 20
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void foo(int (*p)[], int n)
{
    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", (*p)[i]);  // Display output
}
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    foo(&a, 5);
    return 0;  // Indicate successful program termination
}
