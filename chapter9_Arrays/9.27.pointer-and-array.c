/*
 * Program: Pointer And Array
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int arr[6]={11, 21, 31, 41, 15, 18};
    printf("%ld\n", &arr[5]-&arr[0]);  // Display output
    return 0;  // Indicate successful program termination
}
