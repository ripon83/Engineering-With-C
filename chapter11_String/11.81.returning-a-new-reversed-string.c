/*
 * Program: Returning A New Reversed String
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
char *strrev(char str[])
{
    int i, j, n;
    for(n=0; str[n]!='\0'; n++);  // Repeat over the required characters
    char *tmp = (char *)malloc(n+1);  // Declare and initialize a character pointer
    for(i=0, j=n-1; str[i]!='\0'; i++, j--)  // Repeat over the required characters
    {
        tmp[i] = str[j];
    }
    tmp[i] = '\0';
    return tmp;
}
int main()  // Main function: program execution starts here
{
    char str[] = "peek";  // Initialize a character array as a string
    char *rev = strrev(str);  // Declare and initialize a character pointer
    printf("The reversal is: \"%s\"", rev);  // Display output
    free(rev);
    return 0;  // Indicate successful program termination
}
