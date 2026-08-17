/*
 * Program: Find Out The Output 89
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[4][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    int (*p)[3]=a;
    printf("%d", p[a[0][0]][a[0][1]]);  // Display output

    return 0;  // Indicate successful program termination
}
