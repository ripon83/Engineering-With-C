#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include "core.h"


void currentSummary(match *m1, match * m2, int ball, int *win) 
{
    printf("\n=========================Current summary========================");
    printf("\nTotal score: %d/%d (%d.%d)\t",m1->score, m1->wicket, m1->current_over,ball);
    if((m2->score-m1->score+1) >= 0)
        printf("Need: %d runs from %d balls\t\t\t", m2->score-m1->score+1, m1->overs*6-(m1->current_over*6+ball));
    else
        printf("Won!\t\t\t");
    printf("%s* : %d (%d)\t\t", m1->team[m1->striker].name, m1->team[m1->striker].runs, m1->team[m1->striker].balls);
    printf("%s : %d (%d)\n", m1->team[m1->nonStriker].name, m1->team[m1->nonStriker].runs, m1->team[m1->nonStriker].balls);
    printf("Runs in this over: ");
    for(int i=0; i<ball; i++)
    {
        if(m1->ov[m1->current_over].b[i].runs==7)
            printf("W\t");
        else
            printf("%d\t",m1->ov[m1->current_over].b[i].runs);
    }
    printf("\n==============================================================\n");
    if(m1->score > m2->score)
        *win=1;
}

void currentSummaryOpp(match *m, int ball) 
{
    printf("\n=========================Current summary========================");
    printf("\nTotal score: %d/%d (%d.%d)\t\t\t\t",m->score, m->wicket, m->current_over,ball);
    printf("%s* : %d (%d)\t\t", m->team[m->striker].name, m->team[m->striker].runs, m->team[m->striker].balls);
    printf("%s : %d (%d)\n", m->team[m->nonStriker].name, m->team[m->nonStriker].runs, m->team[m->nonStriker].balls);
    printf("Runs in this over: ",m->current_over+1);
    
    for(int i=0; i<ball; i++)
    {
        if(m->ov[m->current_over].b[i].runs==7)
            printf("W\t");
        else
            printf("%d\t",m->ov[m->current_over].b[i].runs);
    }
    printf("\n==============================================================\n");
}



void playBall(match *m1, match *m2, int ball, int *win) 
{
    printf("\nBall %d ", ball);
    int input = getRun();
    if (input == 7) 
    {
        m1->team[m1->striker].balls++;
        m1->ov[m1->current_over].b[ball-1].runs=7;
        batsmanOut(m1);
        currentSummary(m1, m2, ball, win);
        return;
    }
    m1->team[m1->striker].balls++;
    if(input>0 && input <=6)
        m1->ov[m1->current_over].b[ball-1].runs=input;
    else
        m1->ov[m1->current_over].b[ball-1].runs=0;
    
    addRun(m1, input);
    changeStrikeOnRun(m1, input);
    currentSummary(m1, m2, ball, win);
}

void playBallOpp(struct Match *m, int ball) 
{
    printf("\nBall %d ", ball);
    int input = getRun();
    if (input == 7) 
    {
        m->team[m->striker].balls++;
        m->ov[m->current_over].b[ball-1].runs=7;
        batsmanOut(m);
        currentSummaryOpp(m, ball);
        return;
    }
    m->team[m->striker].balls++;
    if(input>0 && input <=6)
        m->ov[m->current_over].b[ball-1].runs=input;
    else
        m->ov[m->current_over].b[ball-1].runs=0;
    
    addRun(m, input);
    changeStrikeOnRun(m, input);
    currentSummaryOpp(m, ball);
}

void playOver(match *m1, match *m2, int over, int *win) 
{
    char ch[100], anykey;
    printf("\n===== OVER %d =====\n", over);
    for (int b = 1; b <= 6; b++) 
    {
        printf("\nAre you ready to paly the upcoming ball (y/n)?");
        scanf("%s",ch);
        convertToLower(ch);
        if(strcmp(ch,"y")==0 || strcmp(ch,"yes")==0)
        {
            playBall(m1, m2, b, win);
            if (m1->nextPlayer >= m1->totalPlayers && (m1->team[m1->striker].out == 1 || m1->team[m1->nonStriker].out == 1))
                return;
        }
       if(*win==1)
            return;
    }
    changeStrikeEndOver(m1);
    m1->current_over++;
    printf("\n");
}

void playOverOpp(struct Match *m, int over, int *flag) 
{
    char ch[100];
    printf("\n===== OVER %d =====\n", over);
    for (int b = 1; b <= 6; b++) 
    {
        playBallOpp(m, b);
        if (m->nextPlayer >= m->totalPlayers && (m->team[m->striker].out == 1 || m->team[m->nonStriker].out == 1))
            return;
    }
    changeStrikeEndOver(m);
    m->current_over++;
    printf("\n");
}

void startMatch(match *m1, match *m2, int *win) 
{
    int i=0;
    char ch[100];
    while(i<m1->overs)
    {
        i++;
        playOver(m1, m2, i, win);
        if(*win==1)
            return;
        if (m1->nextPlayer >= m1->totalPlayers && (m1->team[m1->striker].out == 1 || m1->team[m1->nonStriker].out == 1))
        {
            printf("\nAll players are out!\n");
            break;
        }
    }
}


void startMatchOpp(match *m) 
{
    int i=0,flag=0;
    char ch[100];
    while(i<m->overs)
    {
        i++;
        playOverOpp(m, i, &flag);
        if(flag==1)
            break;
        if (m->nextPlayer >= m->totalPlayers && (m->team[m->striker].out == 1 || m->team[m->nonStriker].out == 1))
        {
            printf("\nAll players are out!\n");
            break;
        }
    }
}




