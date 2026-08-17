/*
 * Program 14.9: A Larger Application: Simulating a Weighted Dice Roll Game
 * Purpose: Demonstrates the concept illustrated by this example.
 * This program was extracted from Chapter 14 and annotated for readability.
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int largest(int c1, int c2, int c3, int c4, int c5, int c6)
{
    if(c1>c2 && c1>c3 && c1>c4 && c1>c5 && c1>c6)
        // Return the computed value or finish successfully.
        return 1;
    else if(c2>c3 && c2>c4 && c2>c5 && c2>c6)
        return 2;
    else if(c3>c4 && c3>c5 && c3>c6)
        return 3;
    else if(c4>c5 && c4>c6)
        return 4;
    else if(c5>c6)
        return 5;
    else
        return 6;
}
int roll()
{
    // Seed the pseudo-random number generator.
    srand(clock());
    // Generate a pseudo-random value.
    int t=rand();
    return ((t%6)+1);
}
void play(int m)
{
    int i=0, n=1000, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0;
    // Repeat the required operation.
    for(i=1; i<=n; i++)
    {
        int tmp=roll();
        if(tmp==1)
            c1++;
        else if(tmp==2)
            c2++;
        else if(tmp==3)
            c3++;
        else if(tmp==4)
            c4++;
        else if(tmp==5)
            c5++;
        else
            c6++;
    }
    int l=largest(c1, c2, c3, c4, c5, c6);
    if(m==l)
        // Display the result or prompt.
        printf("You have won! Congratulations!\n");
    else
    {
        printf("You guessed: %d\n",m);
        printf("c1=%d\tc2=%d\tc3=%d\tc4=%d\tc5=%d\tc6=%d\n", c1, c2, c3, c4, c5, c6);
    }
}
// Main function: execution starts here.
int main()
{
    int m;
    char ch[100];
    do{
        printf("Guess a number between 1 to 6:");
        // Read input from the user.
        scanf("%d", &m);
        play(m);
        printf("Would you like to play again (yes/no)?");
        scanf("%s", ch);
    }while(strcmp(ch, "yes")==0||strcmp(ch, "Yes")==0||strcmp(ch, "YES")==0);
    return 0;
}
