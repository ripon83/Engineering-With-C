/*
 * Program: String Initialization 6
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = {'I',' ','a','m',' ',  // Initialize a character array as a string
                  'a',' ','h','u','m',
                  'a','n','\0'};
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
