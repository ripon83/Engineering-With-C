/*
 * Program: Memory Copy
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
void memcopy(void *p, void *q, int size)
{
    char *m=(char *)p;  // Declare and initialize a character pointer
    char *n=(char *)q;  // Declare and initialize a character pointer
    while(size)  // Continue while the condition remains true
    {
        *m=*n;
        size--;
        m++;
        n++;
    }
}
int main()  // Main function: program execution starts here
{
    char s1[100], s2[]="Try try again";  // Initialize a character array as a string
    memcopy(s1, s2, sizeof(s2));
    printf("%s", s1);  // Display output
    return 0;  // Indicate successful program termination
}
