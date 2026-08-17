/*
 * Program: Find Out The Output 35
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={0};
    a[2]=50;  // Store a value in an array element
    a[4]=100;  // Store a value in an array element
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
