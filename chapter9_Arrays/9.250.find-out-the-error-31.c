/*
 * Program: Find Out The Error 31
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    int *p=a;
    printf("%d\t%d", *p, *p++);  // Display output
    return 0;  // Indicate successful program termination
}
