/*
 * Program: String Copy 5
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int main()  // Main function: program execution starts here
{
    char str[10][32]={  // Initialize a character array as a string
        "God",
        "Ishwar",
        "Allah",
        "Gott",
        "Dio",
        "Dieu"
    };

    int i, n=6;

    printf("Original strings:\n");  // Display output

    for(i=0; i<n; i++)  // Repeat over the required characters
        printf("%s\t", str[i]);  // Display output

    strcpy(str[1], "Bhagawan");  // Copy the source string into the destination
    strcpy(str[6], "Khuda");  // Copy the source string into the destination

    printf("\n\nModified strings:\n");  // Display output

    for(i=0; i<7; i++)  // Repeat over the required characters
        printf("%s\t", str[i]);  // Display output

    return 0;  // Indicate successful program termination
}
