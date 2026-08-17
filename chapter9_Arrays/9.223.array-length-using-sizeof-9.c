/*
 * Program: Array Length Using Sizeof 9
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void foo(int a[])
{
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d", n);  // Display output
}
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    foo(a);
    return 0;  // Indicate successful program termination
}
