/*
 * Program: Find Out The Output 56
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int bin[]={1, 0, 1, 1};
    int sum=0;
    for(int i=0, j=3; i<4; i++, j--)  // Iterate through array elements
        sum+=bin[i]*(1<<j);
    printf("%d", sum);  // Display output
    return 0;  // Indicate successful program termination
}
