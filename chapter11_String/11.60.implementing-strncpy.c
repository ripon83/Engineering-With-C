/*
 * Program: Implementing Strncpy
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void strncopy(char des[], char str[], int n)
{
    int i;
    for(i=0; (i < n && str[i] != '\0'); i++)  // Repeat over the required characters
        des[i] = str[i];
    des[i] = '\0';
}
int main()  // Main function: program execution starts here
{
    char str[] = "No one can defeat you unless you defeat yourself.";  // Initialize a character array as a string
    char des[100];
    strncopy(des, str, 21);
    printf("Copied string is: \"%s\"", des);  // Display output
    return 0;  // Indicate successful program termination
}
