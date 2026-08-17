/*
 * Program: Find Out The Output 112
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int (*p)[3]=a;

    p=p+2;
    printf("%d\t%d", p[0][2], p[-2][0]);  // Display output

    return 0;  // Indicate successful program termination
}
