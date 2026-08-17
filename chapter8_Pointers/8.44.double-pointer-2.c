/*
 * Program: Double Pointer 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x=10;
    int *ptr=&x;
    int **pp=&ptr;

    printf("x=%d\t&x=%p\n", x, (void *)&x);  // Display output
    printf("*ptr=%d\tptr=%p\t&ptr=%p\n",  // Display output
           *ptr, (void *)ptr, (void *)&ptr);
    printf("**pp=%d\t*pp=%p\tpp=%p\t&pp=%p\n",  // Display output
           **pp, (void *)*pp, (void *)pp, (void *)&pp);

    return 0;  // Indicate successful program termination
}
