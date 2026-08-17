/*
 * Program: Fix 1 A Static Local Array
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
char *concatenate(char src1[], char src2[])
{
    int i, j, m, n;
    for(m=0; src1[m]!='\0'; m++);  // Repeat over the required characters
    for(n=0; src2[n]!='\0'; n++);  // Repeat over the required characters
    static char des[1024];
    for(i=0; src1[i]!='\0'; i++)  // Repeat over the required characters
        des[i] = src1[i];
    for(j=0; src2[j]!='\0'; j++, i++)  // Repeat over the required characters
        des[i] = src2[j];
    des[i] = '\0';
    return des;
}
int main()  // Main function: program execution starts here
{
    char src1[] = "Always try again and again to do better, even after many failures. ";  // Initialize a character array as a string
    char src2[] = "Success will follow.";  // Initialize a character array as a string
    char *str = concatenate(src1, src2);  // Declare and initialize a character pointer
    printf("\"%s\"", str);  // Display output
    return 0;  // Indicate successful program termination
}
