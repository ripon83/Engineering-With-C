#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

struct Player 
{
    char name[50];
    int runs;
    int balls;
    int out;    
};

typedef struct Boundary
{
    int sixes;
    int fours;
}boundary;

typedef struct Balls
{
    int runs;
}balls;

typedef struct Over
{
    balls b[6];
}over;

typedef struct Match 
{
    struct Player team[11];
    int score;
    int wicket;
    int totalPlayers;
    int striker;     
    int nonStriker;   
    int nextPlayer;   
    int overs;
    int current_over;
    boundary bnd;
    over *ov;
}match;

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

void setupMatch(match *m) 
{
    printf("Enter total number of players (max 11): ");
    scanf("%d", &m->totalPlayers);

    for (int i = 0; i < m->totalPlayers; i++) 
    {
        printf("Enter player %d name: ", i + 1);
        scanf(" %[^\n]", m->team[i].name);
        m->team[i].runs = 0;
        m->team[i].out = 0;
        m->team[i].balls = 0;
    }

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

void addRun(match *m, int run) 
{
    if(run>0 && run <=6)
    {
        if(run==6)
            m->bnd.sixes++;
        if(run==4)
            m->bnd.fours++;
        m->team[m->striker].runs += run;
        m->score += run;
    }
}

void changeStrikeOnRun(match *m, int run) 
{
    if ( run == 1 || run == 3 || run == 5) 
    {
        int temp = m->striker;
        m->striker = m->nonStriker;
        m->nonStriker = temp;
    }
}

void changeStrikeEndOver(struct Match *m) 
{
    int temp = m->striker;
    m->striker = m->nonStriker;
    m->nonStriker = temp;
}

void batsmanOut(struct Match *m) 
{
    printf("Batsman OUT: %s, Runs: %d(%d)\n", m->team[m->striker].name, m->team[m->striker].runs, m->team[m->striker].balls);
    m->team[m->striker].out = 1;
    m->wicket++;
    if (m->nextPlayer >= m->totalPlayers) 
    {
        printf("No players left!\n");
        return;
    }
    printf("New Player In: %s\n", m->team[m->nextPlayer].name);
    m->striker = m->nextPlayer;
    m->nextPlayer++;
}

void showScore(match *m) 
{
    printf("\n======== FINAL SCOREBOARD ========\n");
    
    printf("Total Fours: %d\t Total Sixes: %d\n",m->bnd.fours, m->bnd.sixes);
    
    for (int i = 0; i < m->totalPlayers; i++) {
        printf("%s : %d runs (%d balls), ", m->team[i].name, m->team[i].runs, m->team[i].balls);
        if(m->team[i].balls!=0)
            printf("Strike rate: %0.2f", (double)m->team[i].runs/m->team[i].balls*100);
        else
            printf("Strike rate: 0.0");
        if (m->team[i].out) 
            printf(" (OUT)");
        printf("\n");
    }
}

/*void currentScore(match *m, int ball) 
{
    printf("\nTotal score: %d/%d (%d.%d)\t\t\t\t",m->score, m->wicket, m->current_over,ball-1);
    printf("%s* : %d (%d)\t\t", m->team[m->striker].name, m->team[m->striker].runs, m->team[m->striker].balls);
    printf("%s : %d (%d)\n", m->team[m->nonStriker].name, m->team[m->nonStriker].runs, m->team[m->nonStriker].balls);
}

void overSummary(match *m) 
{
    printf("\n=========================Over summary========================");
    printf("\nTotal score: %d/%d (%d.6)\t\t\t\t",m->score, m->wicket, m->current_over+1);
    printf("%s* : %d (%d)\t\t", m->team[m->striker].name, m->team[m->striker].runs, m->team[m->striker].balls);
    printf("%s : %d (%d)\n", m->team[m->nonStriker].name, m->team[m->nonStriker].runs, m->team[m->nonStriker].balls);
    printf("Runs in the %d over: ",m->current_over+1);
    for(int i=0; i<6; i++)
    {
        if(m->ov[m->current_over].b[i].runs==-1)
            printf("W\t");
        else
            printf("%d\t",m->ov[m->current_over].b[i].runs);
    }
    printf("\n=======================End of Over summary===================\n");
}
*/
void currentSummary(match *m, int ball) 
{
    printf("\n=========================Current summary========================");
    printf("\nTotal score: %d/%d (%d.6)\t\t\t\t",m->score, m->wicket, m->current_over,ball);
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

int getRun() 
{
    int x=0;
    srand(clock()^(unsigned long)(&x));
    x=rand()% 8;
    return x;
}

void playBall(struct Match *m, int ball) 
{
    //currentScore(m, ball);
    
    printf("\nBall %d ", ball);
    int input = getRun();
    if (input == 7) 
    {
        m->team[m->striker].balls++;
        m->ov[m->current_over].b[ball-1].runs=7;
        batsmanOut(m);
        currentSummary(m, ball);
        return;
    }
    m->team[m->striker].balls++;
    if(input>0 && input <=6)
        m->ov[m->current_over].b[ball-1].runs=input;
    else
        m->ov[m->current_over].b[ball-1].runs=0;
    
    addRun(m, input);
    changeStrikeOnRun(m, input);
    currentSummary(m, ball);
}

void playOver(struct Match *m, int over) 
{
    printf("\n===== OVER %d =====\n", over);
    for (int b = 1; b <= 6; b++) 
    {
        playBall(m, b);
        if (m->nextPlayer >= m->totalPlayers && (m->team[m->striker].out == 1 || m->team[m->nonStriker].out == 1))
            return;
    }
    changeStrikeEndOver(m);
    //overSummary(m);
    m->current_over++;
    printf("\n");
}

void startMatch(match *m) 
{
    int i=0;
    char ch[100];
    while(1)
    {
        printf("\nWould you like to paly an over (y/n)?");
        scanf("%s",ch);
        if(strcmp(ch,"Y")==0 || strcmp(ch,"y")==0 || strcmp(ch,"Yes")==0 || strcmp(ch,"yes")==0 || strcmp(ch,"YES")==0)
        {
            i++;
            playOver(m, i);
            if (m->nextPlayer >= m->totalPlayers && (m->team[m->striker].out == 1 || m->team[m->nonStriker].out == 1))
            {
                printf("\nAll players are out!\n");
                break;
            }
        }
        else
            break;
    }
}

int main() 
{
    match *m=(match *)malloc(sizeof(match));
    setupMatch(m);
    startMatch(m);
    showScore(m);
    return 0;
}

