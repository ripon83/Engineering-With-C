/*
 * Program: Find Out The Output 37
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void foo(int a[][4])
{
    printf("%ld", sizeof(a[0]));  // Display output
}
int main()  // Main function: execution starts here
{
    int a[3][4]={0};
    foo(a);
    return 0;  // Indicate successful program termination
}
