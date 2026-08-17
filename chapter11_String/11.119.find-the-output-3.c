/*
 * Program: Find The Output 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
char *foo()
{
    char str[]="Carpe Diem";  // Initialize a character array as a string
    return str;
}
int main()  // Main function: program execution starts here
{
    char *p=foo();  // Declare and initialize a character pointer
    printf("%s\n",p);  // Display output
    return 0;  // Indicate successful program termination
}
