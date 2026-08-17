/*
 * Program: Implementing Concatenation Ourselves
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void concatenate(char des[], char src[])
{
    int i, j, n;
    for(n=0; des[n]!='\0'; n++);  // Repeat over the required characters
    for(i=n, j=0; src[j]!='\0'; j++, i++)  // Repeat over the required characters
        des[i] = src[j];
    des[i] = '\0';
}
int main()  // Main function: program execution starts here
{
    char des[100] = "Accumulation of all failures leads to ";  // Initialize a character array as a string
    char src[] = "success";  // Initialize a character array as a string
    concatenate(des, src);
    printf("The concatenated string is: \"%s\"", des);  // Display output
    return 0;  // Indicate successful program termination
}
