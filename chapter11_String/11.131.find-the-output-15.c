/*
 * Program: Find The Output 15
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int balanced(char *s,int count)
{
    if(!*s)
        return count==0;
    if(*s=='(')
        return balanced(s+1,count+1);
    if(*s==')')
        return count>0 &&
               balanced(s+1,count-1);
    return balanced(s+1,count);
}
int main()  // Main function: program execution starts here
{
    char str[]="(()(()))";  // Initialize a character array as a string
    printf("%d",balanced(str,0));  // Display output
    return 0;  // Indicate successful program termination
}
