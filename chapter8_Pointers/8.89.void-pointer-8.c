/*
 * Program: Void Pointer 8
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
int main()  // Main function: execution starts here
{
    int x = 10;
    void *vp = &x;
    printf("%d\n", *(int *)vp + 5);  // Display output
    return 0;  // Indicate successful program termination
}
