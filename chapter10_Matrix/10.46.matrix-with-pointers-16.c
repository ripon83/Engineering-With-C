/*
 * Program: Matrix With Pointers 16
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int **allocate(int m, int n)
{
    int **p=(int **)malloc(m*sizeof(int *));  // Allocate memory dynamically
    for(int i=0; i<m; i++)  // Iterate over array elements
        p[i]=malloc(n*sizeof(int));  // Allocate memory dynamically
    return p;
}
void populate(int m, int n, int **a)
{
    srand(clock());
    for(int i=0; i<m; i++)  // Iterate over array elements
        for(int j=0; j<n; j++)  // Iterate over array elements
            a[i][j]=rand()%10;
}
void show(int m, int n, int **a)
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
    populate(rows, cols, p);
    show(rows, cols, p);
    return 0;  // Indicate successful program termination
}
