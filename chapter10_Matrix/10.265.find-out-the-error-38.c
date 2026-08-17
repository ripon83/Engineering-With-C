/*
 * Program: Find Out The Error 38
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][3]={0};
    printf("%ld", sizeof(a)/sizeof(a[0][0]));  // Display output
    return 0;  // Indicate successful program termination
}
