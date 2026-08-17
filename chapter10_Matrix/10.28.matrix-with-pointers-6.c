/*
 * Program: Matrix With Pointers 6
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[4][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int *p[4];
    p[0]=a[0];
    p[1]=a[1];
    p[2]=a[2];
    p[3]=a[3];
    for(int i=0; i<4; i++)  // Iterate over array elements
    {
        for(int j=0; j<3; j++)  // Iterate over array elements
            printf("%d\t", p[i][j]);  // Display output
        printf("\n");  // Display output
    }
    return 0;  // Indicate successful program termination
}
