/*
 * Program: Extending Further Comparing Different Data Types
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include<stdio.h>
int main()  // Main function: execution starts here
{
    int a[10];
    char b[10];
    double c[10];

    printf("int a[10]:    %zu bytes\n", sizeof(a));  // Display output
    printf("char b[10]:   %zu bytes\n", sizeof(b));  // Display output
    printf("double c[10]: %zu bytes\n", sizeof(c));  // Display output

    return 0;  // Indicate successful program termination
}
