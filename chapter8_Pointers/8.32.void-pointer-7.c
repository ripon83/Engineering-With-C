/*
 * Program: Void Pointer 7
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

void *foo1(void)
{
    static int x = 10;
    return &x;
}

void *foo2(void)
{
    static double x = 22.0 / 7;
    return &x;
}

int main()  // Main function: execution starts here
{
    void *(*fp)(void);

    fp = foo1;
    int *m = fp();
    printf("First Function: %d\n", *m);  // Display output

    fp = foo2;
    double *n = fp();
    printf("Second Function: %lf\n", *n);  // Display output

    return 0;  // Indicate successful program termination
}
