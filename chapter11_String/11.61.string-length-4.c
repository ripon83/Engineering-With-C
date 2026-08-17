/*
 * Program: String Length 4
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void strncopy(char des[], char src[], int n)
{
    int i;
    char *buff = (char *)malloc((strlen(src)+1)*sizeof(char));  // Declare and initialize a character pointer
    for(i=0; src[i]!='\0'; i++)  // Repeat over the required characters
        buff[i] = src[i];
    buff[i] = '\0';
    for(i=0; (i < n && buff[i] != '\0'); i++)  // Repeat over the required characters
        des[i] = buff[i];
    des[i] = '\0';
    free(buff);
}
int main()  // Main function: program execution starts here
{
    char str[1024] = "We easily surrender if an error encounters. Warriors never surrender.";  // Initialize a character array as a string
    strncopy(str+2, str, 25);
    printf("Copied string is: \"%s\"", str);  // Display output
    return 0;  // Indicate successful program termination
}
