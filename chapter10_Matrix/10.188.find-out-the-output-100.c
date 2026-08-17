/*
 * Program: Find Out The Output 100
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    int *p=a[1];

    printf("%d", ++*p);  // Display output
    printf(" %d", a[1][0]);  // Display output

    return 0;  // Indicate successful program termination
}
