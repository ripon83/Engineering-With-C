/*
 * Program: Extern Variable 3
 * Purpose: Demonstrates the corresponding function concept
 *          presented in Chapter 6.
 */

#include <stdio.h>

void foo()
{
    int m;
    m++;
    printf("m=%d\taddress=%p\n", m, &m);  // Display output
}

int m=10;

int main()  // Main function: execution starts here
{
    foo();
    printf("m=%d\taddress=%p\n", m, &m);  // Display output
    return 0;  // Indicate successful program termination
}
