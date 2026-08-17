/*
 * Program: A Common Pitfall Memset
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    int arr[5];
    memset(arr, 1, 5*sizeof(arr[0]));
    for(int i=0; i<5; i++)  // Repeat over the required characters
        printf("%d ", arr[i]);  // Display output
    return 0;  // Indicate successful program termination
}
