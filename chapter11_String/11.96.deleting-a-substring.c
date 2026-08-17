/*
 * Program: Deleting A Substring
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

void delete(char str[], int p, int q)
{
    int i, j, n;

    /* Find the length of the string */
    for(n=0; str[n]!='\0'; n++);  // Repeat over the required characters

    /* Check whether q is valid */
    if(q>=n)
        return;

    /* Shift the remaining characters */
    for(i=p, j=q; str[j]!='\0'; i++, j++)  // Repeat over the required characters
        str[i]=str[j];

    /* Terminate the shortened string */
    str[i]='\0';
}

int main()  // Main function: program execution starts here
{
    char str[]="We should not give up and we should not allow the problem to defeat us";  // Initialize a character array as a string

    delete(str, 14, 40);

    printf("%s", str);  // Display output

    return 0;  // Indicate successful program termination
}
