/*
 * Program: Find Out The Output 31
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void foo(int *a)
{
    *(a+2)=99;
}
int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5};
    foo(a);
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
