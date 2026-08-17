/*
 * Program: Pointer And Array 23
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i, n=5;
    int a=10, b=20, c=30, d=40, e=50;
    int *p[5];

    p[0]=&a;  // Store a value in an array element
    p[1]=&b;  // Store a value in an array element
    p[2]=&c;  // Store a value in an array element
    p[3]=&d;  // Store a value in an array element
    p[4]=&e;  // Store a value in an array element

    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%p=%d\n", (void *)p[i], *p[i]);  // Display output

    return 0;  // Indicate successful program termination
}
