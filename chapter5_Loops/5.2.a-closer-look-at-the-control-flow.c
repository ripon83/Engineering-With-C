/*
 * Program: A Closer Look At The Control Flow
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i = 0;

    for (printf("Executed only once\n");  // Start or control a for loop
         printf("Condition checking %d<4\n", i) && i < 4;  // Display output
         ++i, printf("Update\n"))
    {
        printf("Inside the loop\n");  // Display output
    }

    printf("Outside the loop\n");  // Display output

    return 0;  // Indicate successful program termination
}
