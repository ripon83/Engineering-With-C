/*
 * Program: Walking Through A String With A Pointer
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Learning to code opens many doors.";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    while (*ptr != '\0')  // Continue while the condition remains true
    {
        printf("%c", *ptr++);  // Display output
    }
    return 0;  // Indicate successful program termination
}
