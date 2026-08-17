/*
 * Program: Find Out The Error 34
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[]={10, 20, 30, 40, 50};
    int *p=&a[1];
    int *q=&a[4];
    printf("%d", p-q);  // Display output
    return 0;  // Indicate successful program termination
}
