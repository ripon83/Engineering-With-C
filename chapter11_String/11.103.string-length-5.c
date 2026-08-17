/*
 * Program: String Length 5
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int isPalindrome(char *s, int l, int r)
{
    if(l>=r)
        return 1;

    if(s[l]!=s[r])
        return 0;  // Indicate successful program termination

    return isPalindrome(s, l+1, r-1);
}

int isPal(char *str)
{
    int len=strlen(str);
    return isPalindrome(str, 0, len-1);
}

int main()  // Main function: program execution starts here
{
    char str[]="step on no pets";  // Initialize a character array as a string

    if(isPal(str))
        printf("Palindrome");  // Display output
    else
        printf("Not a palindrome");  // Display output

    return 0;  // Indicate successful program termination
}
