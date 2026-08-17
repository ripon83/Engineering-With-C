/*
 * Program: Reversal Of An Array Using A Generic Function
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
void rev(void *arr, int n, int size)
{
    char tmp[size];
    char *p=(char *)arr;  // Declare and initialize a character pointer
    for(int i=0, j=n-1; i<j; i++, j--)  // Repeat over the required characters
    {
        memcpy(tmp, p+i*size, size);
        memcpy(p+i*size, p+j*size, size);
        memcpy(p+j*size, tmp, size);
    }
}

int main()  // Main function: program execution starts here
{
    double arr[]={4.5,3,5,7,8,9,2,1,6,10};
    rev(arr, 10, sizeof(double));
    for(int i=0; i<10; i++)  // Repeat over the required characters
        printf("%lf\t", arr[i]);  // Display output
    return 0;  // Indicate successful program termination
}
