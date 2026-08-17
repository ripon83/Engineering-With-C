/*
 * Program: Find Out The Error 23
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][3]={{1, 2, 3}, {4, 5, 6}};
    int *p=a;
    printf("%d", p[4]);  // Display output
    return 0;  // Indicate successful program termination
}
