/*
 * Program: The Danger Of An Undersized Destination
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void strcopy(char des[], char src[])
{
    int i=0;
    for(i=0; src[i]!='\0'; i++)  // Repeat over the required characters
        des[i]=src[i];
    des[i]='\0';
}
int main()  // Main function: program execution starts here
{
    char src[] = "We are born to work hard, not to take rest.";  // Initialize a character array as a string
    char des[1];
    strcopy(des, src);
    printf("%s", des);  // Display output
    return 0;  // Indicate successful program termination
}
