/*
 * Program: Random String 2
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
        int t=rand()%3;

        if(t==0)
            p[i]=(char)(rand()%(90-65+1)+65);
        else if(t==1)
            p[i]=(char)(rand()%(122-97+1)+97);
        else
            p[i]=(char)(rand()%(57-48+1)+48);
    }

    p[i]='\0';
    return p;
}

int main()  // Main function: program execution starts here
{
    printf("%s\n", randomString(8));  // Display output
    printf("%s\n", randomString(10));  // Display output
    printf("%s\n", randomString(12));  // Display output
    return 0;  // Indicate successful program termination
}
