/*
 * Program: Matrix With Pointers 17
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int **allocate(int m, int n)
{
    static int *p[4];
    for(int i=0; i<m; i++)  // Iterate over array elements
        p[i]=malloc(n*sizeof(int));  // Allocate memory dynamically
    return p;
}
void populate(int **a, int m, int n)
{
    srand(clock());
    for(int i=0; i<m; i++)  // Iterate over array elements
        for(int j=0; j<n; j++)  // Iterate over array elements
            a[i][j]=rand()%5;
}
void show(int **a, int m, int n)
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
    int **p=allocate(rows, cols);
    populate(p, rows, cols);
    show(p, rows, cols);
    return 0;  // Indicate successful program termination
}
