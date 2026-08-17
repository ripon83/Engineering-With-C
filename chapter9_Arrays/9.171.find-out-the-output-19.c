/*
 * Program: Find Out The Output 19
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void foo(int a[], int n)
{
    int b[10];
    a=b;
    a[0]=100;  // Store a value in an array element
}
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    foo(a, 5);
    printf("%d", a[0]);  // Display output
    return 0;  // Indicate successful program termination
}
