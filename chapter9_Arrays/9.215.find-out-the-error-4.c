/*
 * Program: Find Out The Error 4
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void foo(int a[])
{
    printf("%ld", sizeof(a));  // Display output
}
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    foo(a);
    return 0;  // Indicate successful program termination
}
