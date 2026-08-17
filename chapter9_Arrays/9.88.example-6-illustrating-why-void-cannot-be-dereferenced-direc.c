/*
 * Program: Example 6 Illustrating Why Void Cannot Be Dereferenced Direc
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[3]={7, 8, 9};
    void *p=a;

    printf("%d\n", *(int *)p);      // Correct
    // printf("%d\n", *p);          // ERROR

    return 0;  // Indicate successful program termination
}
