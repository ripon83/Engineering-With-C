/*
 * Program: Multiple Static Arrays Coexisting
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include<stdio.h>
int main()  // Main function: execution starts here
{
    int a[10];
    int b[20];
    int c[5];

    printf("Total bytes: %zu\n",  // Display output
           sizeof(a) + sizeof(b) + sizeof(c));

    return 0;  // Indicate successful program termination
}
