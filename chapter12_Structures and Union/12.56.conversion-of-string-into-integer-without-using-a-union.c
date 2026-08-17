/*
 * Program 12.56: Conversion of String into Integer Without Using a Union
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    char str[]="abcdef";
    unsigned int k = *(unsigned int *)str;
    printf("%u", k);
    return 0;
}
