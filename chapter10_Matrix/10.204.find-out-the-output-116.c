/*
 * Program: Find Out The Output 116
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[2][3]={{1,2,3}, {4,5,6}};

    printf("%ld\t%ld",  // Display output
           (long)(a+1)-(long)a,
           (long)(&a+1)-(long)&a);

    return 0;  // Indicate successful program termination
}
