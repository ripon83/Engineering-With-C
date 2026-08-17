/*
 * Program: Void Pointer 5
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    double y = 4.5;
    char z = 'A';

    void *ptr;

    ptr = &x;
    printf("x = %d\n", *(int *)ptr);  // Display output

    ptr = &y;
    printf("y = %lf\n", *(double *)ptr);  // Display output

    ptr = &z;
    printf("z = %c\n", *(char *)ptr);  // Display output

    return 0;  // Indicate successful program termination
}
