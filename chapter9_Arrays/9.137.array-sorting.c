/*
 * Program: Array Sorting
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>

void freq(int a[], int n)
{
    int i=0, j, counter=0;

    while(i<n)  // Repeat while the condition remains true
    {
        j=i+1;

        while(j<n && a[i]==a[j])  // Repeat while the condition remains true
        {
            counter++;
            j++;
        }

        printf("The frequency of %d is %d\n",  // Display output
               a[i], counter+1);

        i=j;
        counter=0;
    }
}

int main()  // Main function: execution starts here
{
    int a[]={-2,-2,-1,-1,-1,0,0,0,0,0,
             1,1,1,1,2,3,3,3,150,150,
             151,154,155,155,155};

    int n=sizeof(a)/sizeof(a[0]);

    freq(a, n);

    return 0;  // Indicate successful program termination
}
