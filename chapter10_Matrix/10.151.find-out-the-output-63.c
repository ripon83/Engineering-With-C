/*
 * Program: Find Out The Output 63
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][2]={{1,2}, {3,4}};
    int sum=0;

    for(int i=0; i<2; i++)  // Iterate over array elements
        for(int j=0; j<2; j++)  // Iterate over array elements
            sum+=a[i][j];

    printf("%d", sum);  // Display output
    return 0;  // Indicate successful program termination
}
