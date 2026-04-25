typedef struct Player 
{
    char name[50];
    int runs,balls,sixes,fives,fours,threes,twos,ones,dots;
    unsigned int out:1;    
}player;

typedef struct Boundary
{
    int sixes, fours;
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
    player team[11];
    int score, wicket, totalPlayers, striker, nonStriker, nextPlayer, overs;
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

void Australian(match *m)
{
    char players[11][100]={"Tim David", "Travis Head", "Aaron Hardie", "Marcus Stoinis", "Matthew Short", "C. Mitchell Marsh",
    "Sean Abbott", "Josh Inglis", "Nathan Ellis", "Spencer Johnson", "Adam Zampa"};
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

void addRun(match *m, int run) 
{
    if(run>=0 && run <=6)
    {
        if(run==6)
            m->bnd.sixes++;
        if(run==4)
            m->bnd.fours++;
            
        m->team[m->striker].runs += run;
        m->score += run;
        
        if(run==6)
            m->team[m->striker].sixes++;
        if(run==5)
            m->team[m->striker].fives++;
        if(run==4)
            m->team[m->striker].fours++;
        if(run==3)
            m->team[m->striker].threes++;
        if(run==2)
            m->team[m->striker].twos++;
        if(run==1)
            m->team[m->striker].ones++;
        if(run==0)
            m->team[m->striker].dots++;
    }
}

int getRun() 
{
    int i=0;
    int run[]={0,3,1,0,7,1,0,0,2,0,1,6,0,1,4,2,0,3,0,6,0,1,0,1,0,6,2,0,7,4,0,0,2,5,0,4,0,6,2,0,0,3,1,0,3,0,7,4,0};
    srand(clock()^(unsigned long)(&i));
    
    for(int i=0; i< rand()%100; i++);
    
    int n=sizeof(run)/sizeof(run[0]);
    i=rand()% n;
    return run[i];
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

void changeStrikeEndOver(match *m) 
{
    int temp = m->striker;
    m->striker = m->nonStriker;
    m->nonStriker = temp;
}

void batsmanOut(match *m) 
{
    printf("Batsman OUT: %s, Runs: %d(%d)\n", m->team[m->striker].name, m->team[m->striker].runs, m->team[m->striker].balls);
    m->team[m->striker].out = 1;
    m->team[m->striker].dots++;
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
    printf("Total score: %d/%d(%d)\n",m->score, m->wicket, m->current_over);
    printf("Total Fours: %d\t Total Sixes: %d\n\n",m->bnd.fours, m->bnd.sixes);
    
    if(m->totalPlayers>11)
        return;
    for (int i = 0; i < m->totalPlayers; i++) {
        printf("%s : %d runs (%d balls), ", m->team[i].name, m->team[i].runs, m->team[i].balls);
        if(m->team[i].balls!=0)
            printf("Strike rate: %0.2f", (double)m->team[i].runs/m->team[i].balls*100);
        else
            printf("Strike rate: 0.0");
        if(m->team[i].out) 
            printf(" (OUT)");
        printf("\n");
    }
}

void playerSummary(match *m)
{
    int i=0;
    printf("\n=========================Players summary==========================\n");
    for(i=0; i<m->totalPlayers; i++)
    {
        printf("\n%d. ",i+1);
        if (m->team[i].out || m->team[i].balls==0) 
            printf("%s ",m->team[i].name);
        else
            printf("%s* ",m->team[i].name);
        printf(": %d runs (%d balls), ", m->team[i].runs, m->team[i].balls);
        if(m->team[i].balls!=0)
            printf("Strike rate: %0.2f", (double)m->team[i].runs/m->team[i].balls*100);
        else
            printf(" ");
        printf("\n\t\t");
        if(m->team[i].sixes)
            printf("Sixes: %d ", m->team[i].sixes);
        if(m->team[i].fives)
            printf("Fives: %d ", m->team[i].fives);
        if(m->team[i].fours)
            printf("Fours: %d ", m->team[i].fours);
        if(m->team[i].threes)
            printf("Threes: %d ", m->team[i].threes);
        if(m->team[i].twos)
            printf("Twos: %d ", m->team[i].twos);
        if(m->team[i].ones)
            printf("Ones: %d ", m->team[i].ones);
        if(m->team[i].dots)
            printf("Dots: %d ", m->team[i].dots);
    }
    printf("\n====================================================================\n");
}

void convertToLower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) 
        if (str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] + 32;
}

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

void setupMatchOpp(match *m2, match *m1) 
{
    int ch;
    m2->totalPlayers=m1->totalPlayers;
    printf("\nWho will be your opponent team?\n");
    printf("1. Australian Players\n2. Customize the players\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    if(ch==1)
        Australian(m2);
    else
        custom(m2);

    m2->overs=m1->overs;

    m2->score=0;
    m2->wicket=0;
    m2->current_over=0;
    
    m2->bnd.sixes=0;
    m2->bnd.fours=0;

    m2->striker = 0;
    m2->nonStriker = 1;
    m2->nextPlayer = 2;
    
    m2->ov=(over *)malloc(sizeof(over)*m2->overs);
    initOver(m2);
    
}
