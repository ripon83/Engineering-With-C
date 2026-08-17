/*
 * Program: If Else Statement 2
 * Purpose: Demonstrates the corresponding control-statement concept
 *          presented in Chapter 4.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int experienced = 0;

    if (experienced)  // Test the specified condition
        printf("Experience teaches us what books cannot.");  // Display output
    else  // Execute this branch when the preceding condition is false
        printf("Learning begins with understanding.");  // Display output

    return 0;  // Indicate successful program termination
}
