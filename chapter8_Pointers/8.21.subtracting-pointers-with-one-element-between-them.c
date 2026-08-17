/*
 * Program: Subtracting Pointers With One Element Between Them
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10, y = 2, z = 5;
    int *p = &x, *q = &z;

    printf("&x=%p\t&y=%p\t&z=%p\n", &x, &y, &z);  // Display output
    printf("p=%p\tq=%p\t(q-p)=%td\n", p, q, q-p);  // Display output

    return 0;  // Indicate successful program termination
}
