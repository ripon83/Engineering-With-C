/*
 * Program: Difference Between P I
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[4][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int (*p)[3]=a;

    printf("Printing for *p[i]:\n");  // Display output
    for(int i=0; i<3; i++)  // Iterate over array elements
    {
        printf("%d\t", *p[i]);  // Display output
    }

    printf("\n\nPrinting for (*p)[i]:\n");  // Display output
    for(int i=0; i<3; i++)  // Iterate over array elements
    {
        printf("%d\t", (*p)[i]);  // Display output
    }

    return 0;  // Indicate successful program termination
}
