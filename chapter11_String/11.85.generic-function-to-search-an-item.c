/*
 * Program: Generic Function To Search An Item
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int search(void *arr, int n, void *key, int size)
{
    char *p=(char *)arr;  // Declare and initialize a character pointer
    for(int i=0; i<n; i++)  // Repeat over the required characters
    {
        if(memcmp(p+i*size, key, size)==0)
            return i;
    }
    return -1;
}

int main()  // Main function: program execution starts here
{
    double arr[]={4.5,3,5,7,8,9,2,1,6,10};
    double key=8;
    int k=search(arr, 10, &key, sizeof(double));
    if(k!=-1)
        printf("Item is found at %d\n", k);  // Display output
    else
        printf("Item is not found.");  // Display output
    return 0;  // Indicate successful program termination
}
