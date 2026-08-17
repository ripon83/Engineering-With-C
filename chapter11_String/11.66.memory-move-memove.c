/*
 * Program: Memory Move Memove
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>

void *memove(void *dest, const void *src, int size)
{
    char *d=(char *)dest;  // Declare and initialize a character pointer
    const char *s=(const char *)src;

    if(d<s)
    {
        while(size--)  // Continue while the condition remains true
            *d++=*s++;
    }
    else
    if(d>s)
    {
        d+=size;
        s+=size;
        while(size--)  // Continue while the condition remains true
            *--d=*--s;
    }

    return dest;
}

int main()  // Main function: program execution starts here
{
    char str[]="ABCDEFGHIJ";  // Initialize a character array as a string
    printf("Before memove : %s\n", str);  // Display output
    memove(str+2, str, 8);
    printf("After memove  : %s\n", str);  // Display output
    return 0;  // Indicate successful program termination
}
