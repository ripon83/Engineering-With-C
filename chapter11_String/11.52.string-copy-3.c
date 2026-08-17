/*
 * Program: String Copy 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Sometimes, we feel that we are buried, but we are planted.";  // Initialize a character array as a string
    char *des;
    strcpy(des, str);  // Copy the source string into the destination
    printf("The copied string is: \"%s\"", des);  // Display output
    return 0;  // Indicate successful program termination
}
