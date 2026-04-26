#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Score 
{
    int user;
    int comp;
}score;


void init(score *s)
{
    s->user=0;
    s->comp=0;
}

int userKickDirection()
{
    int ch=0;
    printf("\n========================== Your turn to Kick =====================\n");
    printf("\n1. Left    2. Center    3. Right\n");
    printf("Kick the ball to the goal. Select a side: ");
    scanf("%d", &ch);
    return ch;
}

int userSaveKick()
{
    int ch=0;
    printf("\n====================== Your turn to Save Goal ====================\n");
    printf("\n1. Left    2. Center    3. Right\n");
    printf("Save the ball kicked by the computer: ");
    scanf("%d", &ch);
    return ch;
}


int compKickDirection()
{
    int ch=0;
    srand(clock()^(unsigned long)(&ch));
    for(int i=0; i<=ch%97; i++)
    {
        ch=rand();
        srand(ch^clock());
    }
    ch=rand()%3+1;
    return ch;
}

int compSaveKick()
{
    int ch=0;
    srand(clock()^(unsigned long)(&ch));
    for(int i=0; i<=ch%97; i++)
    {
        ch=rand()^clock();
        srand(ch);
    }
    ch=rand()%3+1;
    return ch;
}

void currentScore(score *s)
{
    printf("\n******************************************************************");
    printf("\n*********************");
    printf(" You: %d ", s->user);
    printf("---");
    printf(" %d: Computer ", s->comp);
    printf("*********************");
    printf("\n******************************************************************\n");
    printf("\n==================================================================\n\n");
}

void userKick(score *s)
{
    int Comp=compSaveKick();
    int User=userKickDirection();
    printf("\n");
    if(User==Comp)
        printf("Computer has saved your kick!\n");
    else if(User<=0 || User>3)
        printf("Missed! Kick outside the goal!\n");
    else
    {
        printf("Congratulations! You have scored!\n");
        s->user++;
    }
}

void compKick(score *s)
{
    int Comp=compKickDirection();
    int User=userSaveKick();
    printf("\n");
    if(User==Comp)
        printf("Congratulations! You have saved a kick!\n");
    else if(User<=0 || User>3)
        printf("Missed! Kick outside the goal!\n");
    else
    {
        printf("The computer has scored!\n");
        s->comp++;
    }
}

void play(score *s)
{
    for(int i=0; i<5; i++)
    {
        userKick(s);
        currentScore(s);
        compKick(s);
        currentScore(s);
    }
    if(s->user > s->comp)
    {
        printf("\n****************************************************************\n");
        printf("\n\t\t\t\t\n");
        printf("\t\tCongratulations! You have won!\n");
        printf("\t\t  You have won by %d goal.\n",s->user - s->comp);
        printf("\n****************************************************************\n");
    }
    else if(s->user == s->comp)
        printf("Match has drawn!\n");
    else
    {
        printf("\t\t You have lost the match by %d goals.\n",s->comp - s->user);
    }
}

int main()
{
    score *s=(score *)malloc(sizeof(score));
    init(s);
    play(s);
    return 0;
}