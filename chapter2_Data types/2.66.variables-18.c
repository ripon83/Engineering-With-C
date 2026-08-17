/*
 * Program: Variables 18
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    static int m;

    {
        static int m;

        printf("Inside: %d\tAddress: %p\n",  // Display output
               m, &m);
    }

    printf("Outside: %d\tAddress: %p\n",  // Display output
           m, &m);

    return 0;  // Indicate successful program termination
}
