/*
 * Program: Reversing A Sentence
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include "libstr.h"

void reversal(char str[])
{
    int i=0, j=0, n;

    for(n=0; str[n]!='\0'; n++);  // Repeat over the required characters

    reverse(str, 0, n-1);

    while(str[j]!='\0')  // Continue while the condition remains true
    {
        if(str[j]==' ')
        {
            reverse(str, i, j-1);
            i=j+1;
            j++;
        }
        else
            j++;
    }

    reverse(str, i, j-1);
}

int main()  // Main function: program execution starts here
{
    char ptr[7][100]={  // Initialize a character array as a string
        "practice makes perfect",
        "laziness kills ambition",
        "anger kills wisdom",
        "fear kills dream",
        "ego kills growth",
        "jealousy kills peace",
        "doubt kill confidence"
    };

    printf("The reversal of \"%s\" is ", ptr[0]);  // Display output
    reversal(ptr[0]);
    printf("\"%s\"\n", ptr[0]);  // Display output

    printf("The reversal of \"%s\" is ", ptr[1]);  // Display output
    reversal(ptr[1]);
    printf("\"%s\"\n", ptr[1]);  // Display output

    printf("The reversal of \"%s\" is ", ptr[2]);  // Display output
    reversal(ptr[2]);
    printf("\"%s\"\n", ptr[2]);  // Display output

    printf("The reversal of \"%s\" is ", ptr[3]);  // Display output
    reversal(ptr[3]);
    printf("\"%s\"\n", ptr[3]);  // Display output

    printf("The reversal of \"%s\" is ", ptr[4]);  // Display output
    reversal(ptr[4]);
    printf("\"%s\"\n", ptr[4]);  // Display output

    printf("The reversal of \"%s\" is ", ptr[5]);  // Display output
    reversal(ptr[5]);
    printf("\"%s\"\n", ptr[5]);  // Display output

    printf("The reversal of \"%s\" is ", ptr[6]);  // Display output
    reversal(ptr[6]);
    printf("\"%s\"\n", ptr[6]);  // Display output

    return 0;  // Indicate successful program termination
}
