/*
 * Program: Demonstration Initializing A Char Array
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int i;
    char a[]={'A', 'B', 'C', 'D'};
    for(i=0; i<4; i++)  // Iterate through array elements
        printf("%c\t", a[i]);  // Display output
}
