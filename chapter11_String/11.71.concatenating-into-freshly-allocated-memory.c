/*
 * Program: Concatenating Into Freshly Allocated Memory
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
void concatenate(char des[], char src1[], char src2[])
{
    int i, j;
    for(i=0; src1[i]!='\0'; i++)  // Repeat over the required characters
        des[i] = src1[i];
    for(j=0; src2[j]!='\0'; j++, i++)  // Repeat over the required characters
        des[i] = src2[j];
    des[i] = '\0';
}
int main()  // Main function: program execution starts here
{
    char src1[] = "If you are failing repeatedly without surrendering, ";  // Initialize a character array as a string
    char src2[] = "you will become a legend one day. Keep this habit.";  // Initialize a character array as a string
    int m, n;
    for(m=0; src1[m]!='\0'; m++);  // Repeat over the required characters
    for(n=0; src2[n]!='\0'; n++);  // Repeat over the required characters
    char *des = (char *)malloc((m+n+1)*sizeof(char));  // Declare and initialize a character pointer
    concatenate(des, src1, src2);
    printf("%s", des);  // Display output
    return 0;  // Indicate successful program termination
}
