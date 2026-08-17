/*
 * Program: Memcpy
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <string.h>
int main()  // Main function: program execution starts here
{
    char src[] = "Reading\0 the errors is Engineering, but we skip it.";  // Initialize a character array as a string
    char des1[1024], des2[1024];
    strncpy(des1, src, 20);
    memcpy(des2, src, 20);
    printf("strncpy demo:  ");  // Display output
    for(int i=0; i<20; i++)  // Repeat over the required characters
        printf("%c", des1[i]);  // Display output
    printf("\nmemcpy demo:  ");  // Display output
    for(int i=0; i<20; i++)  // Repeat over the required characters
        printf("%c", des2[i]);  // Display output
    printf("\n%s\n%s\n", des1, des2);  // Display output
    return 0;  // Indicate successful program termination
}
