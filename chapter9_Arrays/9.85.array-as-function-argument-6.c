/*
 * Program: Array As Function Argument 6
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void printArray(void *arr, int n, char type)
{
    int i;
    if(type=='i')
    {
        int *p=(int *)arr;
        for(i=0; i<n; i++)  // Iterate through array elements
            printf("%d\t", p[i]);  // Display output
    }
    else if(type=='f')
    {
        float *p=(float *)arr;
        for(i=0; i<n; i++)  // Iterate through array elements
            printf("%.2f\t", p[i]);  // Display output
    }
    else if(type=='c')
    {
        char *p=(char *)arr;
        for(i=0; i<n; i++)  // Iterate through array elements
            printf("%c\t", p[i]);  // Display output
    }
    printf("\n");  // Display output
}

int main()  // Main function: execution starts here
{
    int a[4]={10, 20, 30, 40};
    float b[3]={1.5, 2.5, 3.5};
    char c[5]={'A', 'B', 'C', 'D', 'E'};

    printArray(a, 4, 'i');
    printArray(b, 3, 'f');
    printArray(c, 5, 'c');

    return 0;  // Indicate successful program termination
}
