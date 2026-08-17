/*
 * Program: Pointer And Array 24
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int arr[4]={100, 200, 300, 400};
    int (*p)[4]=&arr;

    printf("%d\n", (*p)[0]+(*p)[3]);  // Display output
    printf("%ld\n", sizeof(*p));  // Display output

    p++;
    printf("%p\n", (void *)p);  // Display output

    return 0;  // Indicate successful program termination
}
