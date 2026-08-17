/*
 * Program: Find Out The Output 44
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int *p[2]={a,b};

    p[0]++;
    printf("%d\t%d", *p[0], a[0]);  // Display output
    return 0;  // Indicate successful program termination
}
