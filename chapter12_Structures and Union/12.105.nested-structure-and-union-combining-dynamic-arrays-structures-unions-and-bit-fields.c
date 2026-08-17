/*
 * Program 12.105: Nested structure and union - Combining dynamic arrays structures unions and bit-fields
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union Marks
{
    double per;
    int mark;
} marks;

// Define a structure used by the program.
typedef struct Student
{
    char name[100];
    marks m;
    unsigned int isPer : 1;
} student;

// Define a structure used by the program.
typedef struct Students
{
    int size;
    int capacity;
    student *st;
} students;

students *create(int n)
{
    students *s = (students *)malloc(sizeof(students));

    s->size = -1;
    s->capacity = n;
    s->st = (student *)malloc(sizeof(student) * n);

    return s;
}

void input(students *s)
{
    char name[100];
    double per;
    int mark, ch;

    if(s->size < s->capacity - 1)
    {
        printf("Enter the name of the student: ");
        scanf(" %[^\n]", name);

        strcpy(s->st[++s->size].name, name);

        printf("1. Total marks\n");
        printf("2. Percentage\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if(ch == 1)
        {
            printf("Enter the total marks: ");
            scanf("%d", &mark);

            s->st[s->size].isPer = 0;
            s->st[s->size].m.mark = mark;
        }
        else if(ch == 2)
        {
            printf("Enter the percentage: ");
            scanf("%lf", &per);

            s->st[s->size].isPer = 1;
            s->st[s->size].m.per = per;
        }
    }
    else
    {
        printf("Student list is full.\n");
    }
}

void populate(students *s)
{
    char ch[10];

    while(1)
    {
        printf("Would you like to input (yes/no)? ");
        scanf("%9s", ch);

        if(strcmp(ch, "yes") == 0 ||
           strcmp(ch, "Yes") == 0 ||
           strcmp(ch, "YES") == 0)
        {
            input(s);
        }
        else
            break;
    }
}

void show(students *s)
{
    for(int i = 0; i <= s->size; i++)
    {
        if(s->st[i].isPer == 0)
            printf("Name: %s\tTotal marks: %d\n",
                   s->st[i].name,
                   s->st[i].m.mark);
        else
            printf("Name: %s\tPercentage: %0.2lf\n",
                   s->st[i].name,
                   s->st[i].m.per);
    }
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    students *s = create(100);

    populate(s);
    show(s);

    free(s->st);
    free(s);

    return 0;
}
