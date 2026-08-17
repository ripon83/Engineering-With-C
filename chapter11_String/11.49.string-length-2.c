/*
 * Program: String Length 2
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[100] = "Continuous and consistent self-improvement is the key to success";  // Initialize a character array as a string
    size_t len = strlen(str);
    printf("The length: %zu", len);  // Display output
    return 0;  // Indicate successful program termination
}
