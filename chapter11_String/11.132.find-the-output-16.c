/*
 * Program: Find The Output 16
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int main()  // Main function: program execution starts here
{
    char *str[]={  // Declare and initialize a character pointer
        "Hug the problems",
        "Cowards run away from problems",
        "Keep improving yourself",
        "Keep trying"
    };

    printf("%s\n",str[0]);  // Display output
    printf("%s\n",str[1]+8);  // Display output
    printf("%s\n",*(str+2));  // Display output
    printf("%s\n",3[str]);  // Display output
    printf("%c\n",str[1][2]);  // Display output
    printf("%c\n",*str[3]);  // Display output
    printf("%c\n",*(*(str+2)+6));  // Display output
    return 0;  // Indicate successful program termination
}
