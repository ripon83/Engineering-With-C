/*
 * Program: Find Out The Error 35
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int *p=a[0];

    for(int i=0; i<9; i++)  // Iterate over array elements
        printf("%d ", p[i]);  // Display output

    return 0;  // Indicate successful program termination
}
