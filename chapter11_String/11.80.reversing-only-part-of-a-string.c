/*
 * Program: Reversing Only Part Of A String
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void strrev(char str[], int p, int q)
{
    int i, j;
    for(i=p, j=q; i<j; i++, j--)  // Repeat over the required characters
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}
int main()  // Main function: program execution starts here
{
    char str[] = "He is a dog and evil";  // Initialize a character array as a string
    strrev(str, 8, 10);
    strrev(str, 16, 19);
    printf("The reversal is: \"%s\"", str);  // Display output
    return 0;  // Indicate successful program termination
}
