/*
 * Program: Variables 10
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

void display()
{
    static int n;
    printf("%d", n);  // Display output
}

int main()  // Main function: program execution starts here
{
    display();
    return 0;  // Indicate successful program termination
}
