/*
 * Program: Find Out The Error 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void strcopy(char des[], char src[])
{
    for(int i=0; src[i]!='\0'; i++)  // Repeat over the required characters
        des[i]=src[i];
}
int main()  // Main function: program execution starts here
{
    char src[]="No pain no gain";  // Initialize a character array as a string
    char des[1024];
    strcopy(des, src);
    printf("%s\n", des);  // Display output
    return 0;  // Indicate successful program termination
}
