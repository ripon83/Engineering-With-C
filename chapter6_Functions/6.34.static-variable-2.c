/*
 * Program: Static Variable 2
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

//myprog2.c
//Saved as myprog2.c

#include <stdio.h>

extern void foo(int);

int main()  // Main function: execution starts here
{
    foo(20);
    return 0;  // Indicate successful program termination
}
