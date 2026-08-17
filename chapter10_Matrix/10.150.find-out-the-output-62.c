/*
 * Program: Find Out The Output 62
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][2]={{1,2}, {3,4}};
    int b[2][2]={{5,6}, {7,8}};
    int c[2][2];

    for(int i=0; i<2; i++)  // Iterate over array elements
        for(int j=0; j<2; j++)  // Iterate over array elements
            c[i][j]=a[i][j]+b[i][j];

    printf("%d\t%d", c[0][1], c[1][0]);  // Display output
    return 0;  // Indicate successful program termination
}
