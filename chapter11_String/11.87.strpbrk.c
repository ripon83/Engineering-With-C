/*
 * Program: Strpbrk
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int main()  // Main function: program execution starts here
{
    char str1[]="Try try again";  // Initialize a character array as a string
    char str2[]="digging";  // Initialize a character array as a string

    char *ptr=strpbrk(str1,str2);  // Declare and initialize a character pointer

    if(ptr!=NULL)
        printf("The first matching character in \"%s\" is '%c'\n",  // Display output
                str1,*ptr);
    else
        printf("No matching character found.\n");  // Display output

    return 0;  // Indicate successful program termination
}
