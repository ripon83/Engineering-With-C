/*
 * Program: Find Out The Output 41
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][3]={{1, 2, 3}, {4, 5, 6}};
    int (*p)[3]=a;
    printf("%d\t%d", p[0][2], p[1][0]);  // Display output
    return 0;  // Indicate successful program termination
}
