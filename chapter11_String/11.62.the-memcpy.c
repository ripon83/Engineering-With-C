/*
 * Program: The Memcpy
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char src[] = "Hug the error if any.";  // Initialize a character array as a string
    char des[1024];
    memcpy(des, src, 14);
    des[14] = '\0';
    printf("%s", des);  // Display output
    return 0;  // Indicate successful program termination
}
