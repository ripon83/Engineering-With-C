/*
 * Program: Find Out The Error 16
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void foo(int r, int c, int a[][r])
{
    printf("%d", a[1][2]);  // Display output
}
int main()  // Main function: execution starts here
{
    int a[2][3]={{1,2,3}, {4,5,6}};
    foo(2, 3, a);
    return 0;  // Indicate successful program termination
}
