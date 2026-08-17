/*
 * Program: Find Out The Output 77
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][2]={{10,20}, {30,40}};
    int (*p)[2]=a;

    printf("%d", p[0][0]+p[1][1]);  // Display output
    return 0;  // Indicate successful program termination
}
