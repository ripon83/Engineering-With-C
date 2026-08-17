/*
 * Program: Implementing A Simplified Memset
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void mymemset(char *str, char ch, int n)
{
    for(int i=0; i<n && str[i]!='\0'; i++)  // Repeat over the required characters
        *(str+i) = ch;
}
int main()  // Main function: program execution starts here
{
    char str[1024] = "Even and odds";  // Initialize a character array as a string
    mymemset(str+4, '-', 5*sizeof(str[0]));
    printf("%s", str);  // Display output
    return 0;  // Indicate successful program termination
}
