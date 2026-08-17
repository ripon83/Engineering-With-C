/*
 * Program: Find The Output
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void binary(char *arr, int k, int n)
{
    if(k==n)
    {
        arr[k]='\0';
        printf("%s\n", arr);  // Display output
        return;
    }
    arr[k]='0';
    binary(arr, k+1, n);
    arr[k]='1';
    binary(arr, k+1, n);
}
int main()  // Main function: program execution starts here
{
    char str[32];
    binary(str,0,5);
    return 0;  // Indicate successful program termination
}
