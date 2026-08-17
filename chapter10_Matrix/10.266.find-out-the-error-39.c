/*
 * Program: Find Out The Error 39
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void foo(int a[][3])
{
    int rows=sizeof(a)/sizeof(a[0]);
    printf("%d", rows);  // Display output
}
int main()  // Main function: execution starts here
{
    int a[4][3]={0};
    foo(a);
    return 0;  // Indicate successful program termination
}
