/*
 * Program: Random String
 * Purpose: Demonstrates the corresponding string-programming concept
 *          presented in Chapter 11.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * randomString(int n)
{
    int i;
    char *p=(char *)malloc(n+1);  // Declare and initialize a character pointer
    srand(clock());

    for(i=0; i<n; i++)  // Repeat over the required characters
    {
        if(rand()&1)
            p[i]=(char)(rand()%(90-65+1)+65);
        else
            p[i]=(char)(rand()%(122-97+1)+97);
    }
    p[i]='\0';
    return p;
}

int main()  // Main function: program execution starts here
{
    int n=8;
    char *ptr=randomString(n);  // Declare and initialize a character pointer
    printf("%s", ptr);  // Display output
    free(ptr);
    return 0;  // Indicate successful program termination
}
