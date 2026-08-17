/*
 * Program: Pointer And Array 5
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={1, 2, 3, 4, 5};
    int b[5]={5, 4, 3, 2, 1};
    int *p=a;
    printf("The first array:\n");  // Display output
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", *(p+i));  // Display output
    p=b;
    printf("\nThe first array:\n");  // Display output
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", *(p+i));  // Display output
    return 0;  // Indicate successful program termination
}
