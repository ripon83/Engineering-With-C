/*
 * Program: Find Out The Error 25
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void foo(int a[][3])
{
    printf("%d", a[1][2]);  // Display output
}
int main()  // Main function: execution starts here
{
    int a[2][4]={{1,2,3,4},{5,6,7,8}};
    foo(a);
    return 0;  // Indicate successful program termination
}
