/*
 * Program: Matrix With Pointers 4
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3]={1,2,3}, b[3]={4,5,6}, c[3]={7,8,9}, d[3]={10,11,12};
    int *p[4]={a, b, c, d};
    printf("%d\t%d\t%d\t%d\n", *p[0], *p[1], *p[2], *p[3]);  // Display output
    return 0;  // Indicate successful program termination
}
