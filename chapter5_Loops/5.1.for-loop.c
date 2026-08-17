/*
 * Program: For Loop
 * Purpose: Demonstrates the corresponding loop concept
 *          presented in Chapter 5.
 */

#include <stdio.h>

int main()  // Main function: execution starts here
{
    int i = 0;

    for (printf("Initial\n");  // Start or control a for loop
         printf("Condition\n") && i < 4;  // Display output
         ++i && printf("Update\n"))
    {
        printf("Inside\n");  // Display output
    }

    printf("Outside\n");  // Display output

    return 0;  // Indicate successful program termination
}
