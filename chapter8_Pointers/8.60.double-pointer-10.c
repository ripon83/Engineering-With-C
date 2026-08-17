/*
 * Program: Double Pointer 10
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

void foo(int **pp)
{
    printf("Inside function: pp=%p\t*pp=%p\n",  // Display output
           (void *)pp, (void *)*pp);

    int x = 100;

    *pp = &x;

    printf("Inside function: &x=%p\tpp=%p\t*pp=%p\n",  // Display output
           (void *)&x, (void *)pp, (void *)*pp);
}

int main()  // Main function: execution starts here
{
    int m = 10;
    int *ptr = &m;

    printf("Inside main: &m=%p\tptr=%p\t&ptr=%p\n",  // Display output
           (void *)&m, (void *)ptr, (void *)&ptr);

    foo(&ptr);

    printf("After function call: &m=%p\tptr=%p\t&ptr=%p\n",  // Display output
           (void *)&m, (void *)ptr, (void *)&ptr);

    return 0;  // Indicate successful program termination
}
