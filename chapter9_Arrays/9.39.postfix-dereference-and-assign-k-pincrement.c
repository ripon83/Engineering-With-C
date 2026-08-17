/*
 * Program: Postfix Dereference And Assign K Pincrement
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int arr[6]={10, 20, 30, 40, 50, 60};
    int *p=arr;
    int k=*p++;
    printf("%d\t%d\n", k, *p);  // Display output
    for(int i=0; i<6; i++)  // Iterate through array elements
        printf("%d\t", arr[i]);  // Display output
    return 0;  // Indicate successful program termination
}
