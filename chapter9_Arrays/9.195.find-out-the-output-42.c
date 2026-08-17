/*
 * Program: Find Out The Output 42
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][2]={{10, 20}, {30, 40}, {50, 60}};
    int (*p)[2]=a;
    p++;
    printf("%d\t%d", (*p)[0], (*p)[1]);  // Display output
    return 0;  // Indicate successful program termination
}
