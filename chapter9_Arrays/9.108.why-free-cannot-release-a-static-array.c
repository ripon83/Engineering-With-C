/*
 * Program: Why Free Cannot Release A Static Array
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
int main()  // Main function: execution starts here
{
    int arr[10];
    free(arr);  // Release dynamically allocated memory
    return 0;  // Indicate successful program termination
}
