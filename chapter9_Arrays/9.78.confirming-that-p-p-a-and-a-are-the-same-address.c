/*
 * Program: Confirming That P P A And A Are The Same Address
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int a[5]={1, 2, 3, 4, 5};
    int (*p)[5]=&a;
    printf("%p\t%p\t%p\t%p\n",  // Display output
           (void *)a,
           (void *)&a,
           (void *)p,
           (void *)*p);
    return 0;  // Indicate successful program termination
}
