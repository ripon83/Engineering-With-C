/*
 * Program 12.103: Nested structure and union - Structure containing a union of marks
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union Marks
{
    float per;
    int mark;
} marks;

// Define a structure used by the program.
typedef struct Student
{
    char name[100];
    marks m;
    unsigned int isPer : 1;
} student;

void show(student *s)
{
    if(s->isPer == 0)
        printf("Name: %s\tTotal marks: %d\n",
               s->name, s->m.mark);
    else
        printf("Name: %s\tPercentage: %0.2f\n",
               s->name, s->m.per);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    student *s = (student *)malloc(sizeof(student));

    strcpy(s->name, "Hemanta Pegu");
    s->m.per = 97.89;
    s->isPer = 1;

    show(s);

    free(s);
    return 0;
}
