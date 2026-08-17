/*
 * Program: Find The Output 19
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char str[]="Programming";  // Initialize a character array as a string
    printf("%c\n",*(str+5));  // Display output
    printf("%c\n",5[str]);  // Display output
    return 0;  // Indicate successful program termination
}
