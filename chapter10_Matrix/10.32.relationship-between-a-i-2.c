/*
 * Program: Relationship Between A I 2
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[4][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int (*p)[3]=a;
    printf("%p\t%p\t%p\t%p\n", a[0], a[1], a[2], a[3]);  // Display output
    printf("%p\t%p\t%p\t%p\n", p[0], p[1], p[2], p[3]);  // Display output
    return 0;  // Indicate successful program termination
}
