/*
 * Program: Void Pointer 9
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 10;
    int *p = &x;
    void *vp = p;
    printf("%d\n", *(int *)vp);  // Display output
    return 0;  // Indicate successful program termination
}
