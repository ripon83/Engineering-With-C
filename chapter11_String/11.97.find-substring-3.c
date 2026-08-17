/*
 * Program: Find Substring 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

void delete(char str[], int p, int q)
{
    int i, j, n;

    for(n=0; str[n]!='\0'; n++);  // Repeat over the required characters

    if(q>=n)
        return;

    for(i=p, j=q; str[j]!='\0'; i++, j++)  // Repeat over the required characters
        str[i]=str[j];

    str[i]='\0';
}

void remSubStr(char src[], char sub[])
{
    char *ptr=strstr(src, sub);  // Declare and initialize a character pointer

    if(ptr==NULL)
        return;

    int len, n=ptr-src;

    for(len=0; sub[len]!='\0'; len++);  // Repeat over the required characters

    delete(src, n, n+len);
}

int main()  // Main function: program execution starts here
{
    char str[]="You don't have to be great to start, but you have to start to be great";  // Initialize a character array as a string

    char sub[]="you have to ";  // Initialize a character array as a string

    remSubStr(str, sub);

    printf("%s", str);  // Display output

    return 0;  // Indicate successful program termination
}
