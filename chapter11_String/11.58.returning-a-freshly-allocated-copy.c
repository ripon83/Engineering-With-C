/*
 * Program: Returning A Freshly Allocated Copy
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
char *strcopy(char src[])
{
    int i, m;
    for(m=0; src[m]!='\0'; m++);  // Repeat over the required characters
    char *buff = (char *)malloc((m+1)*sizeof(char));  // Declare and initialize a character pointer
    for(i=0; src[i]!='\0'; i++)  // Repeat over the required characters
        buff[i] = src[i];
    buff[i] = '\0';
    return buff;
}
int main()  // Main function: program execution starts here
{
    char str[1024] = "You need courage to start coding. That's why you should open your laptop and practice.";  // Initialize a character array as a string
    char *p = strcopy(str);  // Declare and initialize a character pointer
    printf("\"%s\"", p);  // Display output
    free(p);
    return 0;  // Indicate successful program termination
}
