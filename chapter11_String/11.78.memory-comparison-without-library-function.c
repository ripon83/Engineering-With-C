/*
 * Program: Memory Comparison Without Library Function
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
int memcomp(void *p, void *q, int size)
{
    char *m=(char *)p;  // Declare and initialize a character pointer
    char *n=(char *)q;  // Declare and initialize a character pointer
    for(int i=0; i<size; i++)  // Repeat over the required characters
        if(m[i]!=n[i])
            return m[i]-n[i];
    return 0;  // Indicate successful program termination
}
int main()  // Main function: program execution starts here
{
    char s1[]="Good", s2[]="Bad";  // Initialize a character array as a string
    int t=memcomp(s1, s2, sizeof(s1));

    if(t==0)
        printf("%s is equal to %s\n", s1, s2);  // Display output
    else if(t>=0)
        printf("%s is greater than %s\n", s1, s2);  // Display output
    else
        printf("%s is smaller than %s\n", s1, s2);  // Display output

    double m=10, n=3.5;
    t=memcomp(&m, &n, sizeof(double));

    if(t==0)
        printf("%lf is equal to %lf\n", m, n);  // Display output
    else if(t>=0)
        printf("%lf is greater than %lf\n", m, n);  // Display output
    else
        printf("%lf is smaller than %lf\n", m, n);  // Display output

    return 0;  // Indicate successful program termination
}
