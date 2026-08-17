/*
 * Program: Method 3 Function Without A Return Value
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

void palindrome(char str[])
{
    int i, j, n, flag=1;

    for(n=0; str[n]!='\0'; n++);  // Repeat over the required characters

    for(i=0, j=n-1; i<j; i++, j--)  // Repeat over the required characters
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
        printf("\"%s\" is a palindrome", str);  // Display output
    else
        printf("\"%s\" is not a palindrome", str);  // Display output
}

int main()  // Main function: program execution starts here
{
    palindrome("stop pots");
    return 0;  // Indicate successful program termination
}
