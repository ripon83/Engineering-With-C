/*
 * Program: Find Out The Output 95
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][3]={{1,2,3}, {4,5,6}};
    int (*p)[3]=a;

    ++p;
    printf("%d", **p);  // Display output

    return 0;  // Indicate successful program termination
}
