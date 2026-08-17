/*
 * Program: Why Arrincrement Is An Error The Array Is Constant
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int arr[5]={1, 2, 3, 4, 5};
    arr++;   //Error
    printf("%d\n", arr[0]);  // Display output
    return 0;  // Indicate successful program termination
}
