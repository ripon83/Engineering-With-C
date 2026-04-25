#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct student
{
    char name[100];
    char RNo[100];
    char address[100];
    int age;
    char gender;
    char branch[100];
}students;

typedef struct StudentArray
{
    int size;
    int capacity;
    students *st;
}student_array;

student_array *create(int n)
{
    student_array *s=(student_array *)malloc(sizeof(student_array));
    s->size=-1;
    s->capacity=n;
    s->st=(students *)malloc(sizeof(students)*n);
    return s;
}

char *randomAddress()
{
    int i, n=30;
    srand(clock()^(unsigned long)(&i));
    
    char ups[]="ABCDEFGHIJKLMONPQRSTUVWXYZ";
    char str[]="abcdefghijklmnopqrstuvwxyz";
    char digits[]="0123456789";
    
    char *res=(char *)malloc(n);
    res[0]=ups[rand()%26];
    
    for(i=1; i<8; i++)
        res[i]=str[rand()%26];
    res[i]=' ';
    for(i=9; i<14; i++)
        res[i]=str[rand()%26];
    res[i]=' ';
    for(i=15; i<20; i++)
        res[i]=str[rand()%26];
    res[i]=' ';
    for(i=21; i<29; i++)
        res[i]=digits[rand()%10];
    res[i]='\0';
    return res;
}


char *randomName()
{
    int i, n=30;
    srand(clock()^(unsigned long)(&i));
    
    char ups[]="ABCDEFGHIJKLMONPQRSTUVWXYZ";
    char str[]="abcdefghijklmnopqrstuvwxyz";
    char digits[]="0123456789";
    
    char *res=(char *)malloc(n);
    res[0]=ups[rand()%26];
    for(i=1; i<6; i++)
        res[i]=str[rand()%26];
    res[i]='\0';
    return res;
}

void input(student_array *s)
{
    char sname[100], roll[100], subname[100], saddress[100];
    int age;

    srand(clock()^(unsigned long)(&age));
    s->size++;
    sprintf(sname, "%s", randomName());
    strcpy(s->st[s->size].name, sname);
    
    sprintf(roll,"25CS110%d", s->size+1);
    strcpy(s->st[s->size].RNo, roll);
    
    sprintf(saddress, "%s", randomAddress());
    strcpy(s->st[s->size].address, saddress);
    
    age=rand()%(24-16+1)+16;
    s->st[s->size].age=age;
    
    if(rand()&1)
        s->st[s->size].gender='M';
    else
        s->st[s->size].gender='F';
    strcpy(s->st[s->size].branch, "CSE");
}

void populate(student_array *s)
{
    for(int i=0; i< s->capacity; i++)
        input(s);
}


void show(student_array *s)
{
    for(int i=0; i<=s->size; i++)
    {
        printf("\nRoll No: %s\n",s->st[i].RNo);
        printf("Name: %s\n",s->st[i].name);
        printf("Address: %s\n",s->st[i].address);
        printf("Age: %d\n",s->st[i].age);
        printf("Gender: %c\n",s->st[i].gender);
        printf("Branch: %s\n",s->st[i].branch);
    }
}

int main()
{
    student_array *s=create(10);
    populate(s);
    show(s);
   	return 0;
}