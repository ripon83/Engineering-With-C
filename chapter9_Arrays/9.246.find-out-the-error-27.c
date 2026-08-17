/*
 * Program: Find Out The Error 27
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int n=5;
    int a[n];
    n=10;
    a[9]=100;  // Store a value in an array element
    printf("%d", a[9]);  // Display output
    return 0;  // Indicate successful program termination
}
