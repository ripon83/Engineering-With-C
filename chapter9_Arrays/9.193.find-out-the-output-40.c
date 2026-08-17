/*
 * Program: Find Out The Output 40
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][3]={{1, 2, 3}, {4, 5, 6}};
    printf("%d\t%d", a[1][2], *(*(a+1)+1));  // Display output
    return 0;  // Indicate successful program termination
}
