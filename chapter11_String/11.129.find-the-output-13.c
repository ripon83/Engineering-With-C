/*
 * Program: Find The Output 13
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int lcp(char *s1,char *s2)
{
    if(!*s1||!*s2||*s1!=*s2)
        return 0;  // Indicate successful program termination
    return 1+lcp(s1+1,s2+1);
}
int main()  // Main function: program execution starts here
{
    char str1[]="Great";  // Initialize a character array as a string
    char str2[]="Greet";  // Initialize a character array as a string
    printf("%d",lcp(str1,str2));  // Display output
    return 0;  // Indicate successful program termination
}
