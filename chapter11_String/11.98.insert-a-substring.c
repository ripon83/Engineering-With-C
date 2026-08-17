/*
 * Program: Insert A Substring
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>

void insertChar(char src[], int n, char ch, int k)
{
    int i;
    for(i=n; i>k-1; i--)  // Repeat over the required characters
        src[i+1]=src[i];
    src[i+1]=ch;
}

void insertSub(char src[], int p, char sub[])
{
    int i=0, n, m;
    for(n=0; sub[n]!='\0'; n++);  // Repeat over the required characters
    for(m=0; src[m]!='\0'; m++);  // Repeat over the required characters
    for(i=0; i<n; i++)  // Repeat over the required characters
    {
        insertChar(src, m++, sub[i], p++);
    }
}

int main()  // Main function: program execution starts here
{
    char src[1024]="God helps only people who work hard";  // Initialize a character array as a string
    char sub[]="those ";  // Initialize a character array as a string
    insertSub(src, 15, sub);
    printf("%s", src);  // Display output
    return 0;  // Indicate successful program termination
}
