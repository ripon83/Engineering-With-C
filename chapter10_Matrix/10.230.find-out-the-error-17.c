/*
 * Program: Find Out The Error 17
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void foo(int a[][3], int r, int c)
{
    for(int i=0; i<=r; i++)  // Iterate over array elements
        for(int j=0; j<c; j++)  // Iterate over array elements
            printf("%d ", a[i][j]);  // Display output
}
int main()  // Main function: execution starts here
{
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    foo(a, 3, 3);
    return 0;  // Indicate successful program termination
}
