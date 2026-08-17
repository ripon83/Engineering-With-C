/*
 * Program: Void Pointer 10
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    double x = 3.5;
    void *vp = &x;
    printf("%.1lf\n", *(double *)vp);  // Display output
    return 0;  // Indicate successful program termination
}
