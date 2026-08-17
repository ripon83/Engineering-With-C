/*
 * Program: Matrix With Pointers 5
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3]={1,2,3}, b[3]={4,5,6}, c[3]={7,8,9}, d[3]={10,11,12};
    int *p[4]={a, b, c, d};
    for(int i=0; i<4; i++)  // Iterate over array elements
    {
        for(int j=0; j<3; j++)  // Iterate over array elements
            printf("%d\t", p[i][j]);  // Display output
        printf("\n");  // Display output
    }
    return 0;  // Indicate successful program termination
}
