/*
 * Program: String Pointer Arithmetic 3
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[] = "No pain, no gain";  // Initialize a character array as a string
    char *ptr = str;  // Declare and initialize a character pointer
    ptr = ptr + 9;
    printf("%s\n", ptr);  // Display output
    printf("%s\n", &ptr[-6]);  // Display output
    printf("%s\n", &ptr[-9]);  // Display output
    printf("%c", ptr[-4]);  // Display output
    return 0;  // Indicate successful program termination
}
