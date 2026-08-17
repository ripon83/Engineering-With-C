/*
 * Program: Find The Output 9
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void foo(char *s,int n)
{
    if(n<=0)
        return;
    foo(s+1,n-2);
    printf("%c",*s);  // Display output
}
int main()  // Main function: program execution starts here
{
    char str[]="abcdefg";  // Initialize a character array as a string
    foo(str,7);
    return 0;  // Indicate successful program termination
}
