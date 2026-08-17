/*
 * Program: Find Out The Error 20
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void foo(int r, int c, int a[r][c])
{
    a++;
}
int main()  // Main function: execution starts here
{
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    foo(3, 3, a);
    return 0;  // Indicate successful program termination
}
