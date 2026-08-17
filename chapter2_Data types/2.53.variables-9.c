/*
 * Program: Variables 9
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

static int x = 10;   // Global static variable

void display()
{
    printf("%d", x);  // Display output
}

int main()  // Main function: program execution starts here
{
    display();
    return 0;  // Indicate successful program termination
}
