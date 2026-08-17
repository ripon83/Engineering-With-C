/*
 * Program: Find Out The Output 22
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int sum(int *arr, int n) 
{
    return (n==0) ? 0 : arr[0] + sum(arr+1, n-1);
}
int main() {  // Main function: execution starts here
    int a[] = {10, 20, 30, 40, 50};
    printf("%d", sum(a, 5));   // Display output
}
