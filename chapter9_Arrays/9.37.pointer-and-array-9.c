/*
 * Program: Pointer And Array 9
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int arr[6]={10, 20, 30, 40, 50, 60};
    int *p1=&arr[0], *p2=&arr[4];
    p1++;
    p2--;
    printf("%d\n", arr[p2-p1]);  // Display output
    return 0;  // Indicate successful program termination
}
