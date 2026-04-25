#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct ScoreBoard
{
    int userWin;
    int compWin;
    int ties;
}score;

void init(score *s)
{
    s->userWin=0;
    s->compWin=0;
    s->ties=0;
}

int getUserChoice()
{
    int ch=-1;
    printf("\n1. Rock\n2. Paper\n3. Scissor\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    printf("\n");
    return ch;
}

int getCompChoice()
{
    int n;
    srand(clock()^(unsigned long)(&n));
    n=rand();
    for(int i=0; i<=n%97; i++)
    {
        n=rand();
        srand(n^clock());
    }
    n=rand()%3+1;
    return n;
}

char *map(int n)
{
    if(n==1)
        return "Rock";
    else if(n==2)
        return "Paper";
    else if(n==3)
        return "Scissor";
    else
        return NULL;
}


int declareWinner(int user, int comp)
{
    if(user == comp)
        return 0;
    if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2)) 
        return 1; 
    return -1;
}

void choice(int user, int comp)
{
    char str[4][20]={"", "Rock", "Paper", "Scissor"};
    if((user<=0 && user>3) || (comp<=0 && comp>3))
        printf("Invalid choice.\n");
    printf("You chose: %s\n", str[user]);
    printf("Computer chose: %s\n",str[comp]);
}

void currentScore(score *s)
{
    printf("\n\n==================================================================\n");
    printf("\tYours score: %d\tComputer score: %d\tTies: %d",s->userWin, s->compWin, s->ties);
    printf("\n==================================================================\n");
    
}

void winner(score *s, int win)
{
    if(win==0)
    {
        printf("Result: Tie 🤝 ");
        s->ties++;
    }
    else if(win==1)
    {
        printf("Result: You win 🎉 ");
        s->userWin++;
    }
    else if(win==-1)
    {
        printf("Result: Computer win 😭 ");
        s->compWin++;
    }
    else
        printf("Invalid!\n");
}

void convertToLower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) 
        if (str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] + 32;
}

void play(score *s)
{
    int user, comp, win;
    char ch[10];
    do
    {
        system("clear");
        user=getUserChoice();
        comp=getCompChoice();
        choice(user, comp);
        win=declareWinner(user, comp);
        winner(s, win);
        currentScore(s);
        printf("\nWould you like to start the match (y/n)?");
        scanf("%s",ch);
        convertToLower(ch);
    }while(strcmp(ch,"y")==0 || strcmp(ch,"yes")==0);
}

int main()
{
    score *s=(score *)malloc(sizeof(score));
    init(s);
    play(s);
    return 0;
}
