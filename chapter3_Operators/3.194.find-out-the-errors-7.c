/*
 * Program: Find Out The Errors 7
 * Purpose: Demonstrates the corresponding operator concept
 *          presented in Chapter 3.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    int x=5;
    int y=x++;
    printf("x=%d y=%d\n",y,x);  // Display output
    return 0;  // Indicate successful program termination
}
