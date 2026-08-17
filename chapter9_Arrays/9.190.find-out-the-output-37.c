/*
 * Program: Find Out The Output 37
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
    int a[10];
    printf("%ld\t", sizeof(a));  // Display output
    foo(a);
    return 0;  // Indicate successful program termination
}
