/*
 * Program: Find Out The Error 5
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int *foo()
{
    int a[5]={10, 20, 30, 40, 50};
    return a;
}
int main()  // Main function: execution starts here
{
    int *p=foo();
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", p[i]);  // Display output
    return 0;  // Indicate successful program termination
}
