/*
 * Program: Variables 8
 * Purpose: Demonstrates the corresponding data-type or variable concept
 *          presented in Chapter 2.
 */

#include <stdio.h>

void counter()
{
    static int count;
    count++;
    printf("%d\n", count);  // Display output
}

int main()  // Main function: program execution starts here
{
    counter();
    counter();
    counter();

    return 0;  // Indicate successful program termination
}
