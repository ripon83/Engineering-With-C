/*
 * Program 14.42: The Full Interactive "Guess the Most Frequent Face" Game
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "librand.h"
int roll()
{
    // Return the computed value or finish successfully.
    return trng32_ach()%6+1;
}
void freq(int b[], int n, int max)
{
    int i;
    // Repeat the required operation.
    for(i=0; i<=max; i++)
        b[i]=0;
    for(i=0; i<n; i++)
        b[roll()]++;
}
void show(int b[], int max)
{
    // Display the result or prompt.
    printf("Faces\tFrequencies\n");
    for(int i=1; i<=max; i++)
        printf("%d\t%d\n", i, b[i]);
}
int getLargest(int b[],int max)
{
    int k=b[1], j=1;
    for(int i=2; i<=max; i++)
    {
        if(b[i]>k)
        {
            k=b[i];
            j=i;
        }
    }
    return j;
}
// Main function: execution starts here.
int main()
{
    int n=10000, b[7], max=6;
    int m, ch;
    do{
        printf("Guess a number between 1 to 6:");
        // Read input from the user.
        scanf("%d", &m);
        if(m<=0 || m>=7)
            printf("Incorrect input!");
        else
        {
            freq(b, n, max);
            show(b, max);
            int large=getLargest(b, max);
            if(m==large)
                printf("You have won!\n");
            else
                printf("Wrong guess! The largest was %d\n", large);
        }
        printf("Would you like to play it again (1 for Yes, 0 for No)?");
        scanf("%d", &ch);
    }while(ch==1);
    return 0;
}
