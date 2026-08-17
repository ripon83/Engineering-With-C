/*
 * Program: Sum Of Array Elements
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>

int sumInt(void *arr, int n)
{
    int *p=(int *)arr;
    int total=0;

    for(int i=0; i<n; i++)  // Iterate through array elements
        total+=p[i];

    return total;
}

float sumFloat(void *arr, int n)
{
    float *p=(float *)arr;
    float total=0;

    for(int i=0; i<n; i++)  // Iterate through array elements
        total+=p[i];

    return total;
}

int main()  // Main function: execution starts here
{
    int a[4]={10, 20, 30, 40};
    float b[3]={1.5, 2.5, 3.0};

    printf("Int sum: %d\n", sumInt(a, 4));  // Display output
    printf("Float sum: %.2f\n", sumFloat(b, 3));  // Display output

    return 0;  // Indicate successful program termination
}
