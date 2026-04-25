#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include "opponent.h"

void initOver(match *m)
{
    for(int i=0; i<m->overs; i++)
    {
        m->ov[i].b[0].runs=0;
        m->ov[i].b[1].runs=0;
        m->ov[i].b[2].runs=0;
        m->ov[i].b[3].runs=0;
        m->ov[i].b[4].runs=0;
        m->ov[i].b[5].runs=0;
    }
}

void custom(match *m)
{
    for (int i = 0; i < m->totalPlayers; i++) 
    {
        printf("Enter player %d name: ", i + 1);
        scanf(" %[^\n]", m->team[i].name);
        m->team[i].runs = 0;
        m->team[i].out = 0;
        m->team[i].balls = 0;
        m->team[i].sixes = 0;
        m->team[i].fives = 0;
        m->team[i].fours = 0;
        m->team[i].threes = 0;
        m->team[i].twos = 0;
        m->team[i].ones = 0;
        m->team[i].dots = 0;
    }
}

void Indian(match *m)
{
    char players[11][100]={"Rohit Shrama", "Abhishek Sharma", "Virat Kohli", "Shubman Gill", 
    "K L Rahul", "Tilak Varma", "Hardik Pandya", "Axar Patel", "Kuldeep Yadav", "Jasprit Bumraah","Arshdeep Singh"};
    printf("\nThe selected payers are:\n");
    for (int i = 0; i < m->totalPlayers; i++) 
    {
        strcpy(m->team[i].name, players[i]);
        printf("%d. %s\n",i+1,players[i]);
        m->team[i].runs = 0;
        m->team[i].out = 0;
        m->team[i].balls = 0;
        m->team[i].sixes = 0;
        m->team[i].fives = 0;
        m->team[i].fours = 0;
        m->team[i].threes = 0;
        m->team[i].twos = 0;
        m->team[i].ones = 0;
        m->team[i].dots = 0;
    }
}

// void Australian(match *m)
// {
//     char players[11][100]={"Tim David", "Travis Head", "Aaron Hardie", "Marcus Stoinis", "Matthew Short", "C. Mitchell Marsh",
//     "Sean Abbott", "Josh Inglis", "Nathan Ellis", "Spencer Johnson", "Adam Zampa"};
//     printf("\nThe selected payers are:\n");
//     for (int i = 0; i < m->totalPlayers; i++) 
//     {
//         strcpy(m->team[i].name, players[i]);
//         printf("%d. %s\n",i+1,players[i]);
//         m->team[i].runs = 0;
//         m->team[i].out = 0;
//         m->team[i].balls = 0;
//         m->team[i].sixes = 0;
//         m->team[i].fives = 0;
//         m->team[i].fours = 0;
//         m->team[i].threes = 0;
//         m->team[i].twos = 0;
//         m->team[i].ones = 0;
//         m->team[i].dots = 0;
//     }
// }

void setupMatch(match *m) 
{
    int ch;
    printf("Enter total number of players (max 11): ");
    scanf("%d", &m->totalPlayers);
    if(m->totalPlayers>11)
    {
        printf("Wrong input\n");
        return;
    }
    printf("\nWho will be your team?\n");
    printf("1. Play with Indian Players\n2. Customize the players\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    if(ch==1)
        Indian(m);
    else
        custom(m);

    printf("\nEnter number of overs: ");
    scanf("%d", &m->overs);

    m->score=0;
    m->wicket=0;
    m->current_over=0;
    
    m->bnd.sixes=0;
    m->bnd.fours=0;

    m->striker = 0;
    m->nonStriker = 1;
    m->nextPlayer = 2;
    
    m->ov=(over *)malloc(sizeof(over)*m->overs);
    initOver(m);
    
}


// void setupMatchOpp(match *m2, match *m1) 
// {
//     int ch;
//     m2->totalPlayers=m1->totalPlayers;
//     printf("\nWho will be your opponent team?\n");
//     printf("1. Australian Players\n2. Customize the players\n");
//     printf("Enter your choice: ");
//     scanf("%d",&ch);
//     if(ch==1)
//         Australian(m2);
//     else
//         custom(m2);

//     m2->overs=m1->overs;

//     m2->score=0;
//     m2->wicket=0;
//     m2->current_over=0;
    
//     m2->bnd.sixes=0;
//     m2->bnd.fours=0;

//     m2->striker = 0;
//     m2->nonStriker = 1;
//     m2->nextPlayer = 2;
    
//     m2->ov=(over *)malloc(sizeof(over)*m2->overs);
//     initOver(m2);
    
// }

// void addRun(match *m, int run) 
// {
//     if(run>=0 && run <=6)
//     {
//         if(run==6)
//             m->bnd.sixes++;
//         if(run==4)
//             m->bnd.fours++;
            
//         m->team[m->striker].runs += run;
//         m->score += run;
        
//         if(run==6)
//             m->team[m->striker].sixes++;
//         if(run==5)
//             m->team[m->striker].fives++;
//         if(run==4)
//             m->team[m->striker].fours++;
//         if(run==3)
//             m->team[m->striker].threes++;
//         if(run==2)
//             m->team[m->striker].twos++;
//         if(run==1)
//             m->team[m->striker].ones++;
//         if(run==0)
//             m->team[m->striker].dots++;
//     }
// }

// void changeStrikeOnRun(match *m, int run) 
// {
//     if ( run == 1 || run == 3 || run == 5) 
//     {
//         int temp = m->striker;
//         m->striker = m->nonStriker;
//         m->nonStriker = temp;
//     }
// }

// void changeStrikeEndOver(struct Match *m) 
// {
//     int temp = m->striker;
//     m->striker = m->nonStriker;
//     m->nonStriker = temp;
// }

// void batsmanOut(struct Match *m) 
// {
//     printf("Batsman OUT: %s, Runs: %d(%d)\n", m->team[m->striker].name, m->team[m->striker].runs, m->team[m->striker].balls);
//     m->team[m->striker].out = 1;
//     m->team[m->striker].dots++;
//     m->wicket++;
//     if (m->nextPlayer >= m->totalPlayers) 
//     {
//         printf("No players left!\n");
//         return;
//     }
//     printf("New Player In: %s\n", m->team[m->nextPlayer].name);
//     m->striker = m->nextPlayer;
//     m->nextPlayer++;
// }

// void showScore(match *m) 
// {
//     printf("\n======== FINAL SCOREBOARD ========\n");
//     printf("Total score: %d/%d(%d)\n",m->score, m->wicket, m->current_over);
//     printf("Total Fours: %d\t Total Sixes: %d\n\n",m->bnd.fours, m->bnd.sixes);
    
//     if(m->totalPlayers>11)
//         return;
//     for (int i = 0; i < m->totalPlayers; i++) {
//         printf("%s : %d runs (%d balls), ", m->team[i].name, m->team[i].runs, m->team[i].balls);
//         if(m->team[i].balls!=0)
//             printf("Strike rate: %0.2f", (double)m->team[i].runs/m->team[i].balls*100);
//         else
//             printf("Strike rate: 0.0");
//         if(m->team[i].out) 
//             printf(" (OUT)");
//         printf("\n");
//     }
// }

// void playerSummary(match *m)
// {
//     int i=0;
//     printf("\n=========================Players summary==========================\n");
//     for(i=0; i<m->totalPlayers; i++)
//     {
//         printf("\n%d. ",i+1);
//         if (m->team[i].out) 
//             printf("%s ",m->team[i].name);
//         else
//             printf("%s* ",m->team[i].name);
//         printf(": %d runs (%d balls), ", m->team[i].runs, m->team[i].balls);
//         if(m->team[i].balls!=0)
//             printf("Strike rate: %0.2f", (double)m->team[i].runs/m->team[i].balls*100);
//         else
//             printf("Strike rate: 0.0");
//         printf("\n\t\t");
//         if(m->team[i].sixes)
//             printf("Sixes: %d ", m->team[i].sixes);
//         if(m->team[i].fives)
//             printf("Fives: %d ", m->team[i].fives);
//         if(m->team[i].fours)
//             printf("Fours: %d ", m->team[i].fours);
//         if(m->team[i].threes)
//             printf("Threes: %d ", m->team[i].threes);
//         if(m->team[i].twos)
//             printf("Twos: %d ", m->team[i].twos);
//         if(m->team[i].ones)
//             printf("Ones: %d ", m->team[i].ones);
//         if(m->team[i].dots)
//             printf("Dots: %d ", m->team[i].dots);
//     }
//     printf("\n====================================================================\n");
// }

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

// int getRun() 
// {
//     int i=0;
//     int run[]={0,3,1,0,7,1,0,0,2,0,1,6,0,1,4,2,0,3,0,6,0,1,0,1,0,6,2,0,7,4,0,0,2,5,0,4,0,6,2,0,0,3,1,0,3,0,7,4,0};
//     srand(clock()^(unsigned long)(&i));
//     int n=sizeof(run)/sizeof(run[0]);
//     i=rand()% n;
//     return run[i];
// }

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

void convertToLower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) 
        if (str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] + 32;
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
        
        startMatchAuto(m2);
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
    setupMatchAuto(m2, m1);
    play(m1, m2);
    
    return 0;
}

