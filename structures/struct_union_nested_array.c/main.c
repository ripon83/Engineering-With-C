#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef union Marks
{
    double per;
    int mark;
}marks;
typedef struct Student
{
    char name[100];
    marks m;
    int isPer:1;
}student;
typedef struct Students
{
    int size;
    int capacity;
    student *st;
}students;
students *create(int n)
{
    students *s=(students *)malloc(sizeof(students));
    s->size=-1;
    s->capacity=n;
    s->st=(student *)malloc(sizeof(student)*n);
    return s;
}
void input(students *s)
{
    char name[100];
    float per;
    int mark, ch;
    if(s->size < s->capacity-1)
    {
        printf("Enter the name of the student: ");
        scanf(" %[^\n]", name);
        strcpy(s->st[++s->size].name, name);
        printf("1. Total marks\n2. Percentage\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        ch--;
        if(ch==0)
        {
            printf("Enter the total marks:");
            scanf("%d",&mark);
            s->st[s->size].isPer=0;
            s->st[s->size].m.mark=mark;
        }
        else
        {
            printf("Enter the percentage:");
            scanf("%f",&per);
            s->st[s->size].isPer=1;
            s->st[s->size].m.per=per;
        }
    }
    
}
void populate(students *s)
{
    char ch[10];
    while(1)
    {
        printf("Would you like to input(yes/no)?");
        scanf("%s",ch);
        if(strcmp(ch, "yes")==0 || strcmp(ch, "Yes")==0 || strcmp(ch, "YES")==0)
            input(s);
        else
            break;
    }
}
void show(students *s)
{
    for(int i=0; i<= s->size; i++)
    {
        if(s->st[i].isPer==0)
            printf("Name: %s \t Total marks: %d\n", s->st[i].name, s->st[i].m.mark);
        else
            printf("Name: %s \t Percentage: %0.2lf\n", s->st[i].name, s->st[i].m.per);
    }
}
int main()
{
    students *s=create(100);
    populate(s);
    show(s);
    
    return 0;
}