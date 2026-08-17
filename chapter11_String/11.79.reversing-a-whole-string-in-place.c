/*
 * Program: Reversing A Whole String In Place
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void strrev(char str[])
{
    int i, j, n;
    for(n=0; str[n]!='\0'; n++);  // Repeat over the required characters
    for(i=0, j=n-1; i<j; i++, j--)  // Repeat over the required characters
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}
int main()  // Main function: program execution starts here
{
    char str[] = "stressed";  // Initialize a character array as a string
    strrev(str);
    printf("The reversal is: \"%s\"", str);  // Display output
    return 0;  // Indicate successful program termination
}
