/*
 * Program: Find Out The Output 30
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void foo(int a[])
{
    a[1]=100;  // Store a value in an array element
    a[3]=200;  // Store a value in an array element
}
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    foo(a);
    printf("%d\t%d", a[1], a[3]);  // Display output
    return 0;  // Indicate successful program termination
}
