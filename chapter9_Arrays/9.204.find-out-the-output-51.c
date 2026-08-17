/*
 * Program: Find Out The Output 51
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[]={5, 9, 7, -2, 8};
    int min=a[0];
    for(int i=1; i<5; i++)  // Iterate through array elements
        if(a[i]<min)
            min=a[i];
    printf("%d", min);  // Display output
    return 0;  // Indicate successful program termination
}
