/*
 * Program 12.114: Student information - Example 2
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Define a structure used by the program.
struct subject
{
    char name[100];
    int mark;
};

// Define a structure used by the program.
typedef struct student
{
    char name[1000];
    char RNo[1000];
    struct subject sub[10];
}students;

void input(students *st, int k)
{
    char sname[100];
    char roll[100];
    char subname[100];

    srand(clock());

    sprintf(sname, "student%d", k);
    strcpy(st->name, sname);

    sprintf(roll, "Roll %d", k);
    strcpy(st->RNo, roll);

    for(int i=0; i<4; i++)
    {
        sprintf(subname, "subject%d", (i+1));
        strcpy(st->sub[i].name, subname);
        st->sub[i].mark=rand()%101;
    }
}

void percentage(students st)
{
    int total=0;

    for(int i=0; i<4; i++)
        total=total+st.sub[i].mark;

    printf("%s\t%s\t%d\t%.2f%%\n",
           st.RNo, st.name, total, (total/400.0)*100.0);
}

void show(students st)
{
    printf("%s   %s:\t", st.RNo, st.name);

    for(int i=0; i<4; i++)
        printf("%s  %d\t", st.sub[i].name, st.sub[i].mark);

    printf("\n");
}

void search(students st[], char str[])
{
    int i, j;

    printf("\nSearch for %s:\n", str);

    for(i=0; i<10; i++)
        if(strcmp(st[i].RNo, str)==0)
        {
            printf("Name: %s\n", st[i].name);

            for(j=0; j<4; j++)
                printf("%s\t%d\n",
                       st[i].sub[j].name,
                       st[i].sub[j].mark);
        }
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    int i;
    students st[10];

    for(i=0; i<10; i++)
        input(&st[i], i+1);

    for(i=0; i<10; i++)
        show(st[i]);

    printf("\nRoll No.   Name   Total marks    Percentage\n");

    for(i=0; i<10; i++)
        percentage(st[i]);

    search(st, "Roll 8");

    return 0;
}
