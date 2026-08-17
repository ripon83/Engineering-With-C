/*
 * Program: Fix 2 Dynamic Allocation
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
    char *des = (char *)malloc(m+n+1);  // Declare and initialize a character pointer
    if(des == NULL)
        return NULL;
    for(i=0; src1[i]!='\0'; i++)  // Repeat over the required characters
        des[i] = src1[i];
    for(j=0; src2[j]!='\0'; j++, i++)  // Repeat over the required characters
        des[i] = src2[j];
    des[i] = '\0';
    return des;
}
int main()  // Main function: program execution starts here
{
    char src1[] = "The scale of a great person's failures is often just as large. ";  // Initialize a character array as a string
    char src2[] = "Do not be afraid of failing hard.";  // Initialize a character array as a string
    char *str = concatenate(src1, src2);  // Declare and initialize a character pointer
    if(str == NULL)
    {
        printf("Memory allocation failed");  // Display output
        return 1;
    }
    printf("The concatenated string is: \"%s\"", str);  // Display output
    free(str);
    return 0;  // Indicate successful program termination
}
