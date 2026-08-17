/*
 * Program: Array Length Using Sizeof 7
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>

int largest(int a[], int n)
{
    int max=a[0];

    for(int i=1; i<n; i++)  // Iterate through array elements
        if(a[i]>max)
            max=a[i];

    return max;
}

void frequency_count(int a[], int n, int f[], int max)
{
    int i;

    for(i=0; i<=max; i++)  // Iterate through array elements
        f[i]=0;  // Store a value in an array element

    for(i=0; i<n; i++)  // Iterate through array elements
        f[a[i]]++;
}

void show_frequency(int a[], int n, int f[], int max)
{
    int visited[max+1];

    for(int i=0; i<=max; i++)  // Iterate through array elements
        visited[i]=0;  // Store a value in an array element

    for(int i=0; i<n; i++)  // Iterate through array elements
    {
        if(visited[a[i]]==0)
        {
            printf("Frequency of %d is %d\n",  // Display output
                   a[i], f[a[i]]);

            visited[a[i]]=1;
        }
    }
}

int main()  // Main function: execution starts here
{
    int a[]={3,5,3,2,5,4,6,1,2,4,6,4,3,2,
             1,0,4,3,0,2,3,4,5,1,2,3,2,0};

    int n=sizeof(a)/sizeof(a[0]);

    int max=largest(a, n);
    int f[max+1];

    frequency_count(a, n, f, max);

    printf("The frequencies are:\n");  // Display output
    show_frequency(a, n, f, max);

    return 0;  // Indicate successful program termination
}
