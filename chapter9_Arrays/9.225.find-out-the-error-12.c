/*
 * Program: Find Out The Error 12
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void foo(int *a, int n)
{
    for(int i=0; i<n; i++)  // Iterate through array elements
        a[i]*=2;
    printf("%d", a[i]);  // Display output
}
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    foo(a);
    return 0;  // Indicate successful program termination
}
