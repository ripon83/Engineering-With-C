/*
 * Program: Arrays Of Different Sizes
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[]={1,2};
    int b[]={3,4,5};
    int c[]={6,7,8,9};

    int *p[3]={a,b,c};

    printf("%d\n", p[0][1]);  // Display output
    printf("%d\n", p[1][2]);  // Display output
    printf("%d\n", p[2][3]);  // Display output

    return 0;  // Indicate successful program termination
}
