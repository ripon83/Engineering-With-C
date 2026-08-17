/*
 * Program: Overlapping Source And Destination
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
    char str[] = "Life is full of ups and downs like our heartbeats.";  // Initialize a character array as a string
    strcopy(str+2, str);
    printf("The copied string is: \"%s\"", str);  // Display output
    return 0;  // Indicate successful program termination
}
