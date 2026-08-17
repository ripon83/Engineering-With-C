/*
 * Program: Solving The Overlap With A Temporary Buffer
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
void strcopy(char des[], char src[])
{
    int i, m;
    for(m=0; src[m]!='\0'; m++);  // Repeat over the required characters
    char *buff = (char *)malloc((m+1)*sizeof(char));  // Declare and initialize a character pointer
    for(i=0; src[i]!='\0'; i++)  // Repeat over the required characters
        buff[i] = src[i];
    buff[i] = '\0';
    for(i=0; buff[i] != '\0'; i++)  // Repeat over the required characters
        des[i] = buff[i];
    des[i] = '\0';
    free(buff);
}
int main()  // Main function: program execution starts here
{
    char str[1024] = "Idle mind cannot create or invent anything new. So, keep your mind busy.";  // Initialize a character array as a string
    strcopy(str+2, str);
    printf("Copied string is: \"%s\"", str);  // Display output
    return 0;  // Indicate successful program termination
}
