/*
 * Program: Filling An Entire Array
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char str[10];
    memset(str, 'A', 10*sizeof(str[0]));
    for(int i=0; i<10; i++)  // Repeat over the required characters
        printf("%c", str[i]);  // Display output
    return 0;  // Indicate successful program termination
}
