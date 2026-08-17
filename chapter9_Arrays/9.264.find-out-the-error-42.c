/*
 * Program: Find Out The Error 42
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    for(int i=5; i>=0; i--)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
