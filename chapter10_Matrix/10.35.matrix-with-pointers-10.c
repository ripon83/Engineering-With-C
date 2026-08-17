/*
 * Program: Matrix With Pointers 10
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={1,2,3,4,5};
    int (*p)[5]=&a;
    printf("%d\t%d\t%d\t%d\n", (*p)[0], (*p)[1], (*p)[2], (*p)[3]);  // Display output
    return 0;  // Indicate successful program termination
}
