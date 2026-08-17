/*
 * Program: Method 2 Compare Characters From Both Ends
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

int palindrome(char str[])
{
    int i, j, n;

    for(n=0; str[n]!='\0'; n++);  // Repeat over the required characters

    for(i=0, j=n-1; i<j; i++, j--)  // Repeat over the required characters
    {
        if(str[i]!=str[j])
            return 0;  // Indicate successful program termination
    }

    return 1;
}

int main()  // Main function: program execution starts here
{
    char str[]="step on no pets";  // Initialize a character array as a string

    if(palindrome(str))
        printf("Palindrome");  // Display output
    else
        printf("Not a palindrome");  // Display output

    return 0;  // Indicate successful program termination
}
