/*
 * Program: Find The Output 10
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <ctype.h>
int count(char *s)
{
    if(*s=='\0')
        return 0;  // Indicate successful program termination
    char c=tolower(*s);
    int flag=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    return flag+count(s+1);
}
int main()  // Main function: program execution starts here
{
    char str[]="Education";  // Initialize a character array as a string
    printf("%d",count(str));  // Display output
    return 0;  // Indicate successful program termination
}
