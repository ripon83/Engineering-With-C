/*
 * Program: Find The Output 14
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int pattern(char *str,char *pat)
{
    if(!*pat)
        return !*str;
    if(*pat=='*')
        return pattern(str,pat+1)
            ||(*str&&pattern(str+1,pat));
    return (*str==*pat||(*pat=='?'&&*str))
            &&pattern(str+1,pat+1);
}
int main()  // Main function: program execution starts here
{
    char str[]="heelloo";  // Initialize a character array as a string
    char pat[]="h*o";  // Initialize a character array as a string
    printf("%d",pattern(str,pat));  // Display output
    return 0;  // Indicate successful program termination
}
