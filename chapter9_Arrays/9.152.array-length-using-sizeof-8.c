/*
 * Program: Array Length Using Sizeof 8
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[15]={10, 20, 30, 40, 50};
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d", n);  // Display output
    return 0;  // Indicate successful program termination
}
