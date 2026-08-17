/*
 * Program: Find Out The Output 43
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[]={5, 10, 15, 20, 25};
    int sum=0;
    for(int i=0; i<5; i+=2)  // Iterate through array elements
        sum+=a[i];
    printf("%d", sum);  // Display output
    return 0;  // Indicate successful program termination
}
