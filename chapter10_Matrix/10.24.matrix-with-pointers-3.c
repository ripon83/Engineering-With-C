/*
 * Program: Matrix With Pointers 3
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a=10, b=20, c=30, d=40;
    int *p[4]={&a, &b, &c, &d};
    for(int i=0; i<4; i++)  // Iterate over array elements
        printf("%d\t", *p[i]);  // Display output
    return 0;  // Indicate successful program termination
}
