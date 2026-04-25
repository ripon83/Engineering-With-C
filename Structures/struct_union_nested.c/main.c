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
void show(student s)
{
    if(s.isPer==0)
        printf("Name: %s \t Total marks: %d\n", s.name, s.m.mark);
    else
        printf("Name: %s \t Percentage: %0.2lf\n", s.name, s.m.per);
}
int main()
{
    student *s=(student *)malloc(sizeof(student)*10);
    strcpy(s[0].name, "Hemanta Pegu");
    s[0].m.per=97.89;
    s[0].isPer=1;
    show(s[0]);
    
    strcpy(s[1].name, "Hemanta Patiri");
    s[1].m.mark=480;
    s[1].isPer=0;
    show(s[1]);
    
    strcpy(s[1].name, "Chanakya Pegu");
    s[1].m.per=98.89;
    s[1].isPer=1;
    show(s[1]);
    
    return 0;
}