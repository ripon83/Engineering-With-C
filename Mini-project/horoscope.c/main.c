#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void toLowerCase(char str[])
{
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
    }
}

unsigned int murmurhash2(const void *key, int len, unsigned int seed)
{
    const unsigned int m = 0x5bd1e995;
    const int r = 24;
    unsigned int h = seed ^ len;
    const unsigned char *data = (const unsigned char *)key;
    while (len >= 4)
    {
        unsigned int k = *(unsigned int *)data;
        k *= m;
        k ^= k >> r;
        k *= m;
        h *= m;
        h ^= k;
        data += 4;
        len -= 4;
    }
    switch (len)
    {
        case 3: h ^= data[2] << 16;
        case 2: h ^= data[1] << 8;
        case 1: h ^= data[0];
                h *= m;
    }
    h ^= h >> 13;
    h *= m;
    h ^= h >> 15;
    return h;
}

unsigned int generateNumber(char name[], int day, int month, int year, int ord)
{
    int seed=0x9747b28c;
    char str[128];
    name[strcspn(name, "\n")] = '\0';
    toLowerCase(name);
    if(ord==1)
        sprintf(str,"%s%d%d%d",name,year,month,day);
    else if(ord==2)
        sprintf(str,"%s%d%d%d%s",name,day,month,year,name);
    else if(ord==3)
        sprintf(str,"%s%d%d%d",name,day,month,year);
    else
        sprintf(str,"%s%d%d%d%s",name,year,month,day,name);
    return murmurhash2(str,strlen(str),seed);
}

void showPrediction(char *name, int day, int month, int year)
{
    char *strength[20] = {
        "Confident and hardworking",
        "Kind and caring",
        "Intelligent and creative",
        "Disciplined and practical",
        "Energetic and ambitious",
        "Honest and loyal",
        "Calm and thoughtful",
        "Natural leader",
        "Helpful and generous",
        "Optimistic and positive",
        "Strong willpower",
        "Creative and artistic",
        "Logical and analytical",
        "Flexible and adaptable",
        "Brave and confident",
        "Polite and respectful",
        "Determined and focused",
        "Friendly and social",
        "Responsible and mature",
        "Innovative and original"
    };

    char *limitation[20] = {
        "Stubborn nature",
        "Too emotional",
        "Easily distracted",
        "Resists change",
        "Impatient",
        "Too trusting",
        "Overthinking",
        "Dominating behavior",
        "Ignores own needs",
        "Unrealistic thinking",
        "Aggressive attitude",
        "Moody nature",
        "Overcritical",
        "Inconsistent",
        "Risk-taking",
        "Avoids confrontation",
        "Obsessive nature",
        "Easily influenced",
        "Very serious",
        "Rebellious attitude"
    };

    char *weakness[20] = {
        "Overconfidence causes mistakes",
        "Gets hurt easily",
        "Poor focus delays success",
        "Misses new opportunities",
        "Hasty decisions cause loss",
        "People may take advantage",
        "Stress affects health",
        "Conflicts with others",
        "Burnout risk",
        "Poor planning leads to failure",
        "Damages relationships",
        "Emotional imbalance",
        "Negativity blocks growth",
        "Lack of stability",
        "Unexpected losses",
        "Problems remain unsolved",
        "Mental exhaustion",
        "Wrong decisions",
        "Misses enjoyment in life",
        "Trouble with authority"
    };

    char *advice[20] = {
        "Stay humble and listen to others",
        "Control emotions and think logically",
        "Set clear goals and avoid distractions",
        "Be open to new ideas and changes",
        "Practice patience before acting",
        "Verify people before trusting fully",
        "Relax and avoid overthinking",
        "Respect others' opinions",
        "Take breaks and care for yourself",
        "Plan realistically before execution",
        "Control anger and communicate calmly",
        "Maintain emotional balance",
        "Focus on solutions, not criticism",
        "Create routines for consistency",
        "Take calculated risks",
        "Face issues instead of avoiding them",
        "Balance work with rest",
        "Think independently before deciding",
        "Add fun and relaxation to life",
        "Respect rules while expressing ideas"
    };
    int index;
    printf("\nPrediction for %s\n", name);
    printf("--------------------------------\n");
    index= generateNumber(name, day, month, year, 1)%20;
    printf("Strength  : %s\n", strength[index]);
    index= generateNumber(name, day, month, year, 2)%20;
    printf("Limitation: %s\n", limitation[index]);
    index= generateNumber(name, day, month, year, 3)%20;
    printf("Weakness  : %s\n", weakness[index]);
    index= generateNumber(name, day, month, year, 4)%20;
    printf("Advice    : %s\n", advice[index]);
}

int main()
{
    char name[50],ans[5];
    int day, month, year;
    int index;
    
    while(1)
    {
        system("clear");
        printf("\n\tWelcome to VedAstro\n");
        printf("--------------------------------\n");
        printf("Enter your name: ");
        scanf(" %[^\n]",name);
        printf("Enter birth date (DD MM YYYY): ");
        scanf("%d%d%d", &day, &month, &year);
        showPrediction(name, day, month, year);
        printf("\nWould you like to check another horoscope (yes or no)?");
        scanf("%s",ans);
        toLowerCase(ans);
        if(strcmp(ans,"yes")!=0 && strcmp(ans,"y")!=0)
            break;
    }
    return 0;
}
