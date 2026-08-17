/*
 * Program: Find Out The Output 21
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void foo(int **ptr1, int **ptr2)
{
    int *p=*ptr1;
    *ptr1=*ptr2;
    *ptr2=p;
}
int main()  // Main function: execution starts here
{
    int a[5]={10, 20, 30, 40, 50};
    int b[5]={1, 2, 3, 4, 5};
    int n=5;
    int *p1=a, *p2=b;
    foo(&p1, &p2);
    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", p1[i]);  // Display output
    return 0;  // Indicate successful program termination
}
