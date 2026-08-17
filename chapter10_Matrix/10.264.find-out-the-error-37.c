/*
 * Program: Find Out The Error 37
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void show(int r, int c, int a[r][c])
{
    printf("%ld", sizeof(a));  // Display output
}
int main()  // Main function: execution starts here
{
    int a[3][3]={0};
    show(3, 3, a);
    return 0;  // Indicate successful program termination
}
