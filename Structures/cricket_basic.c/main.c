#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef struct
{
    int runs;
    int wicket;
}Ball;

typedef struct
{
    Ball ball[6];
    int total;
}Over;

typedef struct
{
    Over *overs;
    int total;
    int wickets;
    int balls;
}Match;

void init(Match *match, int n)
{
    match->overs=(Over *)malloc(n*sizeof(Over));
    match->total=0;
    match->wickets=0;
    match->balls=0;
    for(int i=0; i<n; i++)
        for(int j=0; j<6; j++)
            match->overs[i].ball[j].runs=-1;
}

void PlayAnOver(Match *match, int k)
{
    int r;
    for(int i=0; i<6; i++)
    {
        srand(clock());
        r=rand()%7;
        if(r==5)
        {
            match->overs[k].ball[i].wicket=1;
            match->overs[k].ball[i].runs=0;
            match->wickets++;
            if(match->wickets>=10)
            {
                match->balls++;
                return;
            }
        }
        else
        {
            match->overs[k].ball[i].wicket=0;
            match->overs[k].ball[i].runs=r;
            match->total+=r;
        }
        match->balls++;
    }
}

void PlayMatch(Match *match, int n)
{
    init(match, n);
    for(int i=0; i<n; i++)
    {
        if(match->wickets>9)
            return;
        PlayAnOver(match, i);
    }
}

int ShowOver(Match *match, int k)
{
    for(int i=0; i<6; i++)
    {
        if(match->overs[k].ball[i].runs==-1)
            return -1;
        if(match->overs[k].ball[i].wicket==1)
            printf("W\t");
        else
            printf("%d\t",match->overs[k].ball[i].runs);
    }
    printf("\n\n");
}
void ShowMatch(Match *match, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\n****************Over Number %d*****************\n",i+1);
        if(ShowOver(match, i)==-1)
            break;
    }
    printf("\nScore: %d/%d ",match->total, match->wickets, match->balls/6, match->balls%6); 
    if((match->balls%6)==0)
        printf("(%d)\n",match->balls/6);
    else
        printf("(%d.%d)\n",match->balls/6, match->balls%6); 
}
int main()
{
    int n=10;
    Match *match=(Match *)malloc(sizeof(Match));
    PlayMatch(match, n);
    ShowMatch(match, n);
    return 0;
}