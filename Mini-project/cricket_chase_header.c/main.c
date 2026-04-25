#include <stdio.h>
#include "cricket.h"

void play(match *m1, match *m2)
{
    char ch[100]; 
    int win=0;
    printf("Would you like to start the match (y/n)?");
    scanf("%s",ch);
    convertToLower(ch);
    if(strcmp(ch,"y")==0 || strcmp(ch,"yes")==0)
    {
        system("clear");
        
        startMatchOpp(m2);
        showScore(m2);
        playerSummary(m2);
        
        printf("Ar you ready to chase the opponent (yes)?");
        scanf("%s",ch);

        startMatch(m1,m2, &win);
        showScore(m1);
        playerSummary(m1);
    }
    if(win==1)
    {
        printf("\n**********************************************************************\n");
        printf("\t\tCongratulations! You have Won the match!\n");
        printf("\t\tYou have won by %d wicket\n",m1->totalPlayers - m1->wicket-1);
        printf("\n**********************************************************************\n");
    }
    else if((m2->score-m1->score)==0)
    {
        printf("\n**********************************************************************\n");
        printf("\t\tDrawn!\n");
        printf("\n**********************************************************************\n");
    }
    else
    {
        printf("Try agin. Better Luck next time!\n");
        printf("You have lost by %d runs\n", m2->score-m1->score);
    }
}

int main() 
{
    match *m1=(match *)malloc(sizeof(match));
    match *m2=(match *)malloc(sizeof(match));
    setupMatch(m1);
    setupMatchOpp(m2, m1);
    play(m1, m2);
    
    return 0;
}

