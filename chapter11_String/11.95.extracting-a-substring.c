/*
 * Program: Extracting A Substring
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>

char *getSub(char str[], int p, int q)
{
    int i=0, n;

    /* Find the length of the string */
    for(n=0; str[n]!='\0'; n++);  // Repeat over the required characters

    /* Check whether the ending position is valid */
    if(q>=n)
        return NULL;

    n=q-p;
    char *buff=(char *)malloc(n+1);  // Declare and initialize a character pointer

    /* Copy the substring */
    for(i=0; i<n; i++, p++)  // Repeat over the required characters
        buff[i]=str[p];

    buff[i]='\0';
    return buff;
}

int main()  // Main function: program execution starts here
{
    char str[]="If you want to shine like a sun, first burn like a sun";  // Initialize a character array as a string

    char *ptr=getSub(str, 15, 43);  // Declare and initialize a character pointer

    printf("%s", ptr);  // Display output

    free(ptr);
    return 0;  // Indicate successful program termination
}
