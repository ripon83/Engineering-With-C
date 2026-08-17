/*
 * Program: Implementing Strncat
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void strnmerge(char des[], char src[], int n)
{
    int i, k, j;
    for(k=0; des[k]!='\0'; k++);  // Repeat over the required characters
    for(i=k, j=0; (j<n && src[j]!='\0'); i++, j++)  // Repeat over the required characters
        des[i] = src[j];
    des[i] = '\0';
}
int main()  // Main function: program execution starts here
{
    char str1[100] = "Your job is your passion. ";  // Initialize a character array as a string
    char str2[100] = "Passion should not be anything other than your job.";  // Initialize a character array as a string
    strnmerge(str1, str2, 30);
    printf("Merged string is: \"%s\"", str1);  // Display output
    return 0;  // Indicate successful program termination
}
