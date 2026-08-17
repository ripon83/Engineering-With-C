/*
 * Program: String Length 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
void strcopy(char des[], char src[])
{
    int i=0;
    for(i=0; src[i]!='\0'; i++)  // Repeat over the required characters
        des[i]=src[i];
    des[i]='\0';
}
int main()  // Main function: program execution starts here
{
    char src[] = "Humans are punished by keeping them idle.";  // Initialize a character array as a string
    char des[1];
    if(strlen(src) > sizeof(des))
    {
        printf("The destination variable does not have enough space to copy");  // Display output
        return 0;  // Indicate successful program termination
    }
    strcopy(des, src);
    printf("%s", des);  // Display output
    return 0;  // Indicate successful program termination
}
