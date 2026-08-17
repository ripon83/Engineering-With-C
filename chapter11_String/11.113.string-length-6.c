/*
 * Program: String Length 6
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int anagram(char str1[], char str2[])
{
    int hash[256]={0};
    int i;

    if(strlen(str1)!=strlen(str2))
        return 0;  // Indicate successful program termination

    for(i=0; str1[i]!='\0'; i++)  // Repeat over the required characters
        hash[(unsigned char)str1[i]]++;

    for(i=0; str2[i]!='\0'; i++)  // Repeat over the required characters
        hash[(unsigned char)str2[i]]--;

    for(i=0; i<256; i++)  // Repeat over the required characters
        if(hash[i]!=0)
            return 0;  // Indicate successful program termination

    return 1;
}

int main()  // Main function: program execution starts here
{
    char str1[]="silent";  // Initialize a character array as a string
    char str2[]="listen";  // Initialize a character array as a string

    if(anagram(str1,str2))
        printf("\"%s\" is an anagram of \"%s\"\n",  // Display output
               str2,str1);
    else
        printf("\"%s\" is not an anagram of \"%s\"\n",  // Display output
               str2,str1);

    return 0;  // Indicate successful program termination
}
