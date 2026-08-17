/*
 * Program: Find The Output 11
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void concate(char *str1,char *str2)
{
    if(*str1!='\0')
        concate(str1+1,str2);
    else if(*str2!='\0')
    {
        *str1=*str2;
        *(str1+1)='\0';
        concate(str1+1,str2+1);
    }
}
int main()  // Main function: program execution starts here
{
    char str1[100]="Tooth";  // Initialize a character array as a string
    char str2[]="brush";  // Initialize a character array as a string
    concate(str1,str2);
    printf("%s",str1);  // Display output
    return 0;  // Indicate successful program termination
}
