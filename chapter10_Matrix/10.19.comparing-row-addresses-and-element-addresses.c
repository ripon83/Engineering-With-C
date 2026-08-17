/*
 * Program: Comparing Row Addresses And Element Addresses
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    printf("a[i]:\n");  // Display output
    for(int i=0; i<3; i++)  // Iterate over array elements
        printf("a[%d]=%p\n", i, a[i]);  // Display output
        
    printf("\n&a[i][j]:\n");  // Display output
    for(int i=0; i<3; i++)  // Iterate over array elements
    {
        for(int j=0; j<3; j++)  // Iterate over array elements
            printf("%p\t", &a[i][j]);  // Display output
        printf("\n");  // Display output
    }
    return 0;  // Indicate successful program termination
}
