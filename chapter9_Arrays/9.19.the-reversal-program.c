/*
 * Program: The Reversal Program
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
void reversal(int a[], int n)
{
    int i, j;
    for(i=0, j=n-1; i<j; i++, j--)   //O(n)
    {
        int tmp=a[i];
        a[i]=a[j];  // Store a value in an array element
        a[j]=tmp;  // Store a value in an array element
    }
}
int main()  // Main function: execution starts here
{
    int array[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i, n=10;
    printf("Before reversal\n");  // Display output
    for(i=0; i<n; i++)  //O(n)
        printf("%d\t", array[i]);  // Display output
    reversal(array, n); 
    printf("\nAfter reversal\n");  // Display output
    for(i=0; i<n; i++) //O(n)
        printf("%d\t", array[i]);  // Display output
    return 0;  // Indicate successful program termination
}
