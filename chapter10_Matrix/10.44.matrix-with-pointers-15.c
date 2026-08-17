/*
 * Program: Matrix With Pointers 15
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
void show(int m, int n, int *a[])
{
    for(int i=0; i<m; i++)  // Iterate over array elements
    {
        for(int j=0; j<n; j++)  // Iterate over array elements
            printf("%d\t", a[i][j]);  // Display output
        printf("\n");  // Display output
    }
}

int main()  // Main function: execution starts here
{
    int a[3]={1,2,3}, b[3]={4,5,6}, c[3]={7,8,9}, d[3]={10,11,12};

    int *p[4];

    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;

    show(4, 3, p);

    return 0;  // Indicate successful program termination
}
