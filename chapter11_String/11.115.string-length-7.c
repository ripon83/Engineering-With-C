/*
 * Program: String Length 7
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
    char temp=*x;
    *x=*y;
    *y=temp;
}

void permute(char str[], int left, int right)
{
    if(left==right)
        printf("%s\t", str);  // Display output
    else
    {
        for(int i=left; i<=right; i++)  // Repeat over the required characters
        {
            swap(str+left, str+i);
            permute(str, left+1, right);
            swap(str+left, str+i);
        }
    }
}

void permutation(char str[])
{
    int n=strlen(str);
    permute(str, 0, n-1);
}

int main()  // Main function: program execution starts here
{
    char str[]="ABC";  // Initialize a character array as a string
    permutation(str);
    return 0;  // Indicate successful program termination
}
