/*
 * Program: String Comparison
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int main()  // Main function: program execution starts here
{
    char str1[] = "good";  // Initialize a character array as a string
    char str2[] = "bad";  // Initialize a character array as a string

    int k = strcmp(str1, str2);

    if(k == 0)
        printf("\"%s\" and \"%s\" are equal", str1, str2);  // Display output
    else if(k > 0)
        printf("\"%s\" is greater than \"%s\"", str1, str2);  // Display output
    else
        printf("\"%s\" is smaller than \"%s\"", str1, str2);  // Display output

    return 0;  // Indicate successful program termination
}
