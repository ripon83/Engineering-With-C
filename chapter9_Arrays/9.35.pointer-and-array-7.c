/*
 * Program: Pointer And Array 7
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int arr[6]={10, 20, 30, 40, 50, 60};
    int *p1=&arr[1], *p2=&arr[4];
    printf("%d\n", arr[p2-p1]);  // Display output
    return 0;  // Indicate successful program termination
}
