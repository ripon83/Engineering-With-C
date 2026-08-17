/*
 * Program: Implementing Our Own String Length Function
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int length(char str[])
{
    int i;
    for(i=0; str[i]!='\0'; i++);  // Repeat over the required characters
    return i;
}
int main()  // Main function: program execution starts here
{
    char str[100] = "If you have become an Engineer without knowing programming, then Congratulations. You have become the toothless and clawless tiger.";  // Initialize a character array as a string
    int len = length(str);
    printf("%d", len);  // Display output
    return 0;  // Indicate successful program termination
}
