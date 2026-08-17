/*
 * Program: Find Out The Error 35
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5], b[5];
    int *p=a;
    int *q=b;
    printf("%ld", p-q);  // Display output
    return 0;  // Indicate successful program termination
}
