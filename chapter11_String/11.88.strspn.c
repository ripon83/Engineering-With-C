/*
 * Program: Strspn
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

int main()  // Main function: program execution starts here
{
    const char *str="If you are lucky, then you will not be a great man";
    const char *sub="If you are lucky enough";

    int length=strspn(str,sub);

    printf("Initial segment length: %d\n",length);  // Display output

    return 0;  // Indicate successful program termination
}
