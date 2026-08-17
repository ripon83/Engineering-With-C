/*
 * Program: Auto Storage Class
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    int m = 20;

    {
        int m = 10;
        printf("Inside: %d\tAddress: %p\n",  // Display output
               m, &m);
    }

    printf("Outside: %d\tAddress: %p\n",  // Display output
           m, &m);

    return 0;  // Indicate successful program termination
}
