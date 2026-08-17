/*
 * Program: Variables 21
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

static int value = 100;

void display()
{
    printf("%d", value);  // Display output
}

int main()  // Main function: program execution starts here
{
    display();

    return 0;  // Indicate successful program termination
}
