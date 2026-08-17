/*
 * Program: Incrementing And Decrementing A Pointer
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "Growth begins outside comfort";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    printf("%c\n", *ptr);  // Display output
    printf("%s\n", ptr);  // Display output
    ptr++;              // same effect as ++ptr here
    printf("%c\n", *ptr);  // Display output
    printf("%s", ptr);  // Display output
    return 0;  // Indicate successful program termination
}
