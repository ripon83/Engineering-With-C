/*
 * Program: Find The Output 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void change(char *s)
{
    s="Changed!";
}
int main()  // Main function: program execution starts here
{
    char str[]="Original";  // Initialize a character array as a string
    change(str);
    printf("%s\n",str);  // Display output
    return 0;  // Indicate successful program termination
}
