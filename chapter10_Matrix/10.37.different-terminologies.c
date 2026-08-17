/*
 * Program: Different Terminologies
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int m=4, n=3;
    int a[4][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    printf("&a=%p\ta=%p\n\n", &a, a);  // Display output
    for(int i=0; i<m; i++)  // Iterate over array elements
        printf("&a[%d]=%p\ta[%d]=%p\n", i, &a[i], i, a[i]);  // Display output
        
    printf("\n");  // Display output
    
    for(int i=0; i<m; i++)  // Iterate over array elements
    {
        for(int j=0; j<n; j++)  // Iterate over array elements
            printf("%p\t", &a[i][j]);  // Display output
        printf("\n");  // Display output
    }
    return 0;  // Indicate successful program termination
}
