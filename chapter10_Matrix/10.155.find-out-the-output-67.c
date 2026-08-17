/*
 * Program: Find Out The Output 67
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][3]={{1,2,3}, {4,5,6}};

    for(int i=0; i<6; i++)  // Iterate over array elements
        printf("%d ", *((int *)a+i));  // Display output

    return 0;  // Indicate successful program termination
}
