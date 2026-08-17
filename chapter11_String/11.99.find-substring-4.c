/*
 * Program: Find Substring 4
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
#include "libstr.h"

void replaceStr(char src[], char sub1[], char sub2[])
{
    int n=mystrstr(src, sub1)-src;
    remSubStr(src, sub1);
    insertSub(src, n, sub2);
}

int main()  // Main function: program execution starts here
{
    char src[1024]="Anger means punishing yourself for others' behavior";  // Initialize a character array as a string
    char sub1[]="means punishing yourself ";  // Initialize a character array as a string
    char sub2[]="is a self-punishment ";  // Initialize a character array as a string

    replaceStr(src, sub1, sub2);

    printf("%s", src);  // Display output
    return 0;  // Indicate successful program termination
}
