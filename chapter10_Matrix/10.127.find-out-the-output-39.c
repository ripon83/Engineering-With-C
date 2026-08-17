/*
 * Program: Find Out The Output 39
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void foo(int a[][4])
{
    a[1][2]=100;
}
int main()  // Main function: execution starts here
{
    int a[3][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    foo(a);
    printf("%d", a[1][2]);  // Display output
    return 0;  // Indicate successful program termination
}
