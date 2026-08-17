/*
 * Program: Find Out The Error 7
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void show(int m, int n, int **a)
{
    for(int i=0; i<m; i++)  // Iterate over array elements
    {
        for(int j=0; j<n; j++)  // Iterate over array elements
            printf("%d\t", a[i][j]);  // Display output
        printf("\n");  // Display output
    }
}
int main()  // Main function: execution starts here
{
    int a[4][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    show(4, 3, a);
    return 0;  // Indicate successful program termination
}
