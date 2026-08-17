/*
 * Program: Find Out The Error 31
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void transpose(int r, int c, int a[r][c])
{
    int tmp[r][c];

    for(int i=0; i<r; i++)  // Iterate over array elements
        for(int j=0; j<c; j++)  // Iterate over array elements
            tmp[i][j]=a[j][i];
}
int main()  // Main function: execution starts here
{
    int a[2][3]={{1,2,3}, {4,5,6}};
    transpose(2, 3, a);
    return 0;  // Indicate successful program termination
}
