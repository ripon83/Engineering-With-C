/*
 * Program: Dynamic Array Allocation 17
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void foo(int a[], int n)
{
    a=(int *)malloc(n*4);  // Allocate memory dynamically
    a[0]=100;  // Store a value in an array element
}
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    foo(a, 5);
    printf("%d", a[0]);  // Display output
    return 0;  // Indicate successful program termination
}
