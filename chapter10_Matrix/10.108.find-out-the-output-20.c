/*
 * Program: Find Out The Output 20
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3][4]={{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int (*p)[4]=a;
    printf("%d\t%d", (*p)[2], (*(p+1))[3]);  // Display output
    return 0;  // Indicate successful program termination
}
