/*
 * Program: Pointer And Array 27
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    void *p=a;
    int *ip=(int *)p;
    for(int i=0; i<5; i++)  // Iterate through array elements
        printf("%d\t", ip[i]);  // Display output
    return 0;  // Indicate successful program termination
}
