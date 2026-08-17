/*
 * Program 14.19: Step 1: Observing That Addresses Change Between Runs
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
// Main function: execution starts here.
int main()
{
    int x, y;
    static int z;
    unsigned long int xx=(unsigned long int)&x;
    unsigned long int yy=(unsigned long int)&y;
    unsigned long int zz=(unsigned long int)&z;
    // Display the result or prompt.
    printf("Address of x: %lu\n", xx);
    printf("Address of y: %lu\n", yy);
    printf("Address of z: %lu\n", zz);
    // Return the computed value or finish successfully.
    return 0;
}
