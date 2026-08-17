/*
 * Program: Find Out The Output 61
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][2]={{1,2}, {3,4}};
    int b[2][2];

    for(int i=0; i<2; i++)  // Iterate over array elements
        for(int j=0; j<2; j++)  // Iterate over array elements
            b[j][i]=a[i][j];

    printf("%d\t%d\t%d\t%d",  // Display output
           b[0][0], b[0][1], b[1][0], b[1][1]);

    return 0;  // Indicate successful program termination
}
