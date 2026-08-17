/*
 * Program: Static Variable
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

//prog2.c
//Saved as prog2.c

#include <stdio.h>

int main()  // Main function: execution starts here
{
    extern int m;    //Attempt to access m
    printf("%d\n", m);  // Display output
    return 0;  // Indicate successful program termination
}
