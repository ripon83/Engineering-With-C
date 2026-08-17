/*
 * Program: String Concatenation 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char des[] = "Learning is ";  // Initialize a character array as a string
    char src[] = "earning";  // Initialize a character array as a string
    strcat(des, src);  // Append one string to another
    printf("The concatenated string is: \"%s\"", des);  // Display output
    return 0;  // Indicate successful program termination
}
