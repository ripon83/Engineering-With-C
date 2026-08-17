/*
 * Program: Find Out The Error 30
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    int i=0;
    a[i]=i++;  // Store a value in an array element
    printf("%d", a[0]);  // Display output
    return 0;  // Indicate successful program termination
}
