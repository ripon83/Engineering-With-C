/*
 * Program: Find The Output 8
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void foo(char *str)
{
    if(*str=='\0')
        return;
    foo(str+1);
    printf("%c",*str);  // Display output
}
int main()  // Main function: program execution starts here
{
    char str[]="stressed";  // Initialize a character array as a string
    foo(str);
    return 0;  // Indicate successful program termination
}
