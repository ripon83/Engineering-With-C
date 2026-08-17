/*
 * Program: Implementing Strcpy
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void strcopy(char des[], char src[])
{
    int i;
    for(i=0; src[i]!='\0'; i++)  // Repeat over the required characters
        des[i] = src[i];
    des[i] = '\0';
}
int main()  // Main function: program execution starts here
{
    char str[] = "Sometimes, we feel that we are buried, but we are planted.";  // Initialize a character array as a string
    char des[100];
    strcopy(des, str);
    printf("The copied string is: \"%s\"", des);  // Display output
    return 0;  // Indicate successful program termination
}
