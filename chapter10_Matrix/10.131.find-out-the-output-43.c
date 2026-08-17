/*
 * Program: Find Out The Output 43
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[3]={7,8,9};
    int *p[3]={a,b,c};

    printf("%d\t%d\t%d", *p[0], *p[1], *p[2]);  // Display output
    return 0;  // Indicate successful program termination
}
