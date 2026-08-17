/*
 * Program: Find Character In String
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int main()  // Main function: program execution starts here
{
    char *str =  // Declare and initialize a character pointer
    "The unluckiest people become the luckiest people later. So, be happy if you are unlucky.";

    char ch = 'b';

    char *res = strchr(str, ch);  // Declare and initialize a character pointer

    if(res != NULL)
    {
        printf("First occurrence of '%c' found at position: %ld\n",  // Display output
               ch, res-str);
        printf("Remaining string: %s\n", res);  // Display output
    }
    else
        printf("'%c' not found.\n", ch);  // Display output

    return 0;  // Indicate successful program termination
}
