/*
 * Program: Find Out The Error 38
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    const int a[5]={10, 20, 30, 40, 50};  // Store a value in an array element
    a[2]=100;  // Store a value in an array element
    printf("%d", a[2]);  // Display output
    return 0;  // Indicate successful program termination
}
