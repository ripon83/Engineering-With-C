/*
 * Program: Find The Output 12
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void replace(char *s,char old,char new)
{
    if(!*s)
        return;
    if(*s==old)
        *s=new;
    replace(s+1,old,new);
}
int main()  // Main function: program execution starts here
{
    char str[]="Great";  // Initialize a character array as a string
    replace(str,'a','e');
    printf("%s",str);  // Display output
    return 0;  // Indicate successful program termination
}
