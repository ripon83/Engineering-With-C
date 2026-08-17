/*
 * Program: Void Pointer
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int x = 10;
    double y = 4.5;
    void *p = NULL;

    p = &x;
    printf("%d\t", *(int *)p);  // Display output

    p = &y;
    printf("%lf\n", *(double *)p);  // Display output

    return 0;  // Indicate successful program termination
}
