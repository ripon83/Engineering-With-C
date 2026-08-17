/*
 * Program: Pointer And Array 28
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void *resize(void *ptr, int old_size, int new_size)
{
    if(new_size<=0)
    {
        free(ptr);  // Release dynamically allocated memory
        return NULL;
    }
    if(ptr==NULL)
        return malloc(new_size);  // Allocate memory dynamically
    void *p=malloc(new_size);  // Allocate memory dynamically
    int n=old_size<new_size ? old_size : new_size;
    char *src=ptr;
    char *des=p;
    for(int i=0; i<n; i++)  // Iterate through array elements
        des[i]=src[i];  // Store a value in an array element
    free(ptr);  // Release dynamically allocated memory
    return p;
}
void show(int a[], int n)
{
    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
}
int main()  // Main function: execution starts here
{
    int n=5;
    int *p=(int *)malloc(n*sizeof(int));  // Allocate memory dynamically
    for(int i=0; i<n; i++)  // Iterate through array elements
        p[i]=i+10;  // Store a value in an array element
    printf("The array is:\n");  // Display output
    show(p, n);
    int m=10;
    p=(int *)resize(p, n*sizeof(int), m*sizeof(int));
    for(int i=n; i<10; i++)  // Iterate through array elements
        p[i]=i+10;  // Store a value in an array element
    n=m;
    printf("\nThe enlarged array is:\n");  // Display output
    show(p, n);
    return 0;  // Indicate successful program termination
}
