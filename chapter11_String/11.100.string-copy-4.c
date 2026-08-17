/*
 * Program: String Copy 4
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <libstr.h>
#include <stdlib.h>

int palindrome(char src[])
{
    int n=strlen(src);

    char *buff=(char *)malloc(n+1);  // Declare and initialize a character pointer

    strcpy(buff, src);  // Copy the source string into the destination

    strrev(buff);

    if(mystrcmp(src, buff)==0)
        return 1;

    return 0;  // Indicate successful program termination
}

int main()  // Main function: program execution starts here
{
    char src[1024]="no devil lived on";  // Initialize a character array as a string

    if(palindrome(src))
        printf("Palindrome");  // Display output
    else
        printf("Not a palindrome");  // Display output

    return 0;  // Indicate successful program termination
}
