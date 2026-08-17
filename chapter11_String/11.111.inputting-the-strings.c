/*
 * Program: Inputting The Strings
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    char str[100][32];
    int i, n=7;

    printf("Enter the strings:\n");  // Display output

    for(i=0; i<n; i++)  // Repeat over the required characters
        scanf("%31s", str[i]);  // Read input

    printf("\nThe strings are:\n");  // Display output

    for(i=0; i<n; i++)  // Repeat over the required characters
        printf("%s\n", str[i]);  // Display output

    return 0;  // Indicate successful program termination
}
