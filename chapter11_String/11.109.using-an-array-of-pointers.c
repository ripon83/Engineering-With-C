/*
 * Program: Using An Array Of Pointers
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

int main()  // Main function: program execution starts here
{
    char *str[6]={  // Declare and initialize a character pointer
        "God",
        "Eshwar",
        "Allah",
        "Gott",
        "Dio",
        "Dieu"
    };

    for(int i=0;i<6;i++)  // Repeat over the required characters
        printf("%s\t",str[i]);  // Display output

    return 0;  // Indicate successful program termination
}
