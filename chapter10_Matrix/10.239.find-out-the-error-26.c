/*
 * Program: Find Out The Error 26
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    printf("%d", a[0][3]);  // Display output
    return 0;  // Indicate successful program termination
}
