/*
 * Program: Dynamic Array Allocation 15
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define setBit(n, p) (n|(1<<p))
#define getBit(n, p) ((n>>p)&1)
#define resetBit(n, p) (n&(~(1<<p)))

void insertBit(int a[], int i)
{
    int t=i/32;
    int k=i%32;
    a[t]=setBit(a[t], k);  // Store a value in an array element
}

int GetBit(int a[], int i)
{
    int t=i/32;
    int k=i%32;
    return getBit(a[t], k);
}

void delBit(int a[], int i)
{
    int t=i/32;
    int k=i%32;
    a[t]=resetBit(a[t], k);  // Store a value in an array element
}

void show(int a[], int n)
{
    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", GetBit(a, i));  // Display output
}

int *allocate(int n)
{
    int t=n/32.0+0.9999999;
    int *a=(int *)calloc(t, sizeof(int));  // Allocate memory dynamically
    return a;
}

int main()  // Main function: execution starts here
{
    int n=60, i;
    int *a=allocate(n);
    srand(clock());
    
    //randomly inserting items
    for(i=0; i<n; i++)  // Iterate through array elements
    {
        if((rand()&1)==1)
        {
            insertBit(a, i);
            printf("Inserted at %d\t", i);  // Display output
        }
    }
    
    printf("\nThe array is:\n");  // Display output
    show(a, n);
    
    //deleting items
    delBit(a, 0);
    delBit(a, 1);
    delBit(a, 2);
    delBit(a, 3);
    delBit(a, 4);
    delBit(a, 5);
    
    printf("\nThe array after deletion:\n");  // Display output
    show(a, n);

    free(a);  // Release dynamically allocated memory
    return 0;  // Indicate successful program termination
}
