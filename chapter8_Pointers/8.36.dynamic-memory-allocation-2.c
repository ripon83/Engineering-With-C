/*
 * Program: Dynamic Memory Allocation 2
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

#include <stdio.h>
#include <stdlib.h>

int *foo()
{
    int *x=malloc(sizeof(int));  // Allocate or resize dynamic memory

    if(x != NULL)
        *x=10;

    return x;
}

int main()  // Main function: execution starts here
{
    int *ptr=foo();

    if(ptr != NULL)
    {
        printf("%d", *ptr);  // Display output
        free(ptr);  // Release dynamically allocated memory
    }

    return 0;  // Indicate successful program termination
}
