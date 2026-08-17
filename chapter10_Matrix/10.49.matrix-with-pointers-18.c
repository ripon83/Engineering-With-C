/*
 * Program: Matrix With Pointers 18
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int (*allocate(int m, int n))[]
{
    int (*p)[n]=malloc(m*sizeof(int[n]));  // Allocate memory dynamically
    return p;
}
void populate(int m, int n, int a[][n])
{
    srand(clock());
    for(int i=0; i<m; i++)  // Iterate over array elements
        for(int j=0; j<n; j++)  // Iterate over array elements
            a[i][j]=rand()%5;
}
void show(int m, int n, int a[][n])
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
    int rows=4, cols=3;
    int (*p)[3]=allocate(rows, cols);
    populate(rows, cols, p);
    show(rows, cols, p);
    return 0;  // Indicate successful program termination
}
