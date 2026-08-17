/*
 * Program: Pointer And Array 8
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int arr[6]={10, 20, 30, 40, 50, 60};
    int i, *p=arr;
    p=p+2;
    printf("%d\n", *p);  // Display output
    return 0;  // Indicate successful program termination
}
