/*
 * Program: Find Out The Error 21
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    int (*p)[4]=&a;
    printf("%d", (*p)[3]);  // Display output
    return 0;  // Indicate successful program termination
}
