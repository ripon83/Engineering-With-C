#include <stdio.h>
#include <string.h>

void toLowerCase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}

int hasPattern(char pass[])
{
    char tmp[128];
    strcpy(tmp,pass);
    toLowerCase(tmp);
    int len=strlen(tmp);
    
    for(int i=0; i<len-2; i++)
        if(tmp[i]==tmp[i+1] && tmp[i]==tmp[i+2])
            return 1; 
            
    for(int i=0; i<len-3; i++)
        if(tmp[i]+1==tmp[i+1] && tmp[i]+2==tmp[i+2] && tmp[i]+3==tmp[i+3])
            return 1; 

    for(int i=0; i<len-3; i++)
        if(tmp[i]-1==tmp[i+1] && tmp[i]-2==tmp[i+2] && tmp[i]-3==tmp[i+3])
            return 1; 
    return 0;
}

int hasCommonWord(char *pass)
{
    const char *commonWords[] = {"qwerty", "india", "china", "system", "abc", "password", "admin", "passw0rd", "student", 
    "login", "hello", "welcome", "network", "test", "manager", "access", "default", "secure", "xyz","pqr","lmn", "control", "console",
    "service", "teacher", "user", "asdf", "zxcv", "guest", "root", "server", "computer", "love", "123", "321", 
    "1111", "2222", "3333", "4444", "5555", "6666", "7777", "8888", "9999", "0000"};

    int n = sizeof(commonWords) / sizeof(commonWords[0]);
    char tmp[128];
    strcpy(tmp,pass);
    toLowerCase(tmp);
    int len=strlen(tmp);
    
    for (int i = 0; i < n; i++)
    {
        if (strstr(tmp, commonWords[i]) != NULL)
            return 1;  
    }
    return 0; 
}

int isValid(char *pass)
{
    int n=strlen(pass);
    if(n<10)
        return 0;
    int up=0,low=0,digit=0,symb=0;
    for(int i=0; pass[i]!='\0'; i++)
    {
        if(pass[i]>=65 && pass[i]<=90)
            up=1;
        else if(pass[i]>=97 && pass[i]<=122)
            low=1;
        else if(pass[i]>=48 && pass[i]<=57)
            digit=1;
        else
            symb=1;
    }
    return up && low && digit && symb;
}

int isValidPassword(char *pass)
{
    if(isValid(pass)==1 && !hasCommonWord(pass) && !hasPattern(pass))
        return 1;
    return 0;
}


void counter(char *pass, int count[])
{
    for(int i=0; i<4; i++)
        count[i]=0;
    for(int i=0; pass[i]!='\0'; i++)
    {
        if(pass[i]>=65 && pass[i]<=90)
            count[0]++;
        else if(pass[i]>=97 && pass[i]<=122)
            count[1]++;
        else if(pass[i]>=48 && pass[i]<=57)
            count[2]++;
        else
            count[3]++;
    }
}

int strength(char *pass)
{
    int count[4];
    counter(pass, count);
    if(count[0]>2 && count[1]>2 && count[2]>2 && count[3]>2)
        return 5;
    if(count[0]>1 && count[3]>1 && count[1]>2 && count[2]>2)
        return 4;
    if((count[0]>2 || count[3]>2) && (count[1]>2 && count[2]>2))
        return 3;
    if((count[0]>1 || count[3]>1) && (count[1]>2 && count[2]>2))
        return 2;
    if((count[0]>1 || count[3]>1) && (count[1]>1 && count[2]>1))
        return 1;
    else
        return 0;
}


void checkPassword(char *pass)
{
    if(isValidPassword(pass))
    {
        if(strength(pass)==5)
            printf("Very strong password\n");
        else if(strength(pass)==4)
            printf("Strong password\n");
        else if(strength(pass)==3)
            printf("Good password\n");
        else if(strength(pass)==2)
            printf("Normal password\n");
        else if(strength(pass)==1)
            printf("Weak password\n");
        else
            printf("Very weak password\n");
    }
    else
        printf("The password is invalid\n");
}

int main()
{
    char pass[128], tmp[128];
    while(1)
    {
        printf("Enter your password (type \"No\" to terminate):");
        scanf("%s",pass);
        strcpy(tmp, pass);
        toLowerCase(tmp);
        if(strcmp(tmp, "no")==0 || strcmp(tmp, "n")==0)
            break;
        checkPassword(pass);
    }
    return 0;
}