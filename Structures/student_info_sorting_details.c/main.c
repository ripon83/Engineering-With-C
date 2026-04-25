#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char fname[50];
    char sname[50];
}Name;

typedef struct Students
{
    Name name;
    char roll[10];
    int age;
}students;


void swap(students *a, students *b)
{
    students temp = *a;
    *a = *b;
    *b = temp;
}


int hoarePartitionByFName(students s[], int low, int high) 
{
    char pivot[100];
    strcpy(pivot, s[low].name.fname);
    int i = low - 1;
    int j = high + 1;
    while (1) 
    {
        do { i++; } while (strcmp(s[i].name.fname, pivot) < 0);
        do { j--; } while (strcmp(s[j].name.fname, pivot) > 0);
        if (i >= j)
            return j;
        swap(&s[i], &s[j]);
    }
}

void quickSortByFName(students s[], int low, int high) 
{
    if (low < high) 
    {
        int p = hoarePartitionByFName(s, low, high);
        quickSortByFName(s, low, p);
        quickSortByFName(s, p + 1, high);
    }
}


int hoarePartitionBySName(students s[], int low, int high) 
{
    char pivot[100];
    strcpy(pivot, s[low].name.sname);
    int i = low - 1;
    int j = high + 1;
    while (1) 
    {
        do { i++; } while (strcmp(s[i].name.sname, pivot) < 0);
        do { j--; } while (strcmp(s[j].name.sname, pivot) > 0);
        if (i >= j)
            return j;
        swap(&s[i], &s[j]);
    }
}

void quickSortBySName(students s[], int low, int high) 
{
    if (low < high) 
    {
        int p = hoarePartitionBySName(s, low, high);
        quickSortBySName(s, low, p);
        quickSortBySName(s, p + 1, high);
    }
}


int hoarePartitionByRoll(students s[], int low, int high) 
{
    char pivot[10];
    strcpy(pivot, s[low].roll);
    int i = low - 1;
    int j = high + 1;
    while (1) 
    {
        do { i++; } while (strcmp(s[i].roll, pivot) < 0);
        do { j--; } while (strcmp(s[j].roll, pivot) > 0);
        if (i >= j)
            return j;
        swap(&s[i], &s[j]);
    }
}

void quickSortByRoll(students s[], int low, int high) 
{
    if (low < high) 
    {
        int p = hoarePartitionByRoll(s, low, high);
        quickSortByRoll(s, low, p);
        quickSortByRoll(s, p + 1, high);
    }
}

void input(students *s, int n)
{
    printf("\n\n*********** Student %d ************",n);
    printf("\nEnter the given name: ");
    scanf(" %[^\n]", s->name.fname);
    printf("Enter the surname name: ");
    scanf(" %[^\n]", s->name.sname);
    printf("Enter the roll number:");
    scanf(" %[^\n]", s->roll);
    printf("Enter the age: ");
    scanf("%d",&s->age);
    printf("\n");
}

void populate(students s[], int n)
{
    for(int i=0; i<n; i++)
        input(&s[i], i+1);
}

void show(students s[], int n)
{
    printf("=============================================================\n");
    for(int i=0; i<n; i++)
        printf("%d. Name: %s %s\tRoll Number: %s\tAge: %d\n",i+1,s[i].name.fname,s[i].name.sname, s[i].roll, s[i].age);
    printf("=============================================================\n");
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    students *s=(students *)malloc(sizeof(students)*n);
    populate(s, n);
    show(s, n);
    quickSortByFName(s, 0, n-1);
    printf("\nQuick sort by first name:\n");
    show(s, n);
    quickSortBySName(s, 0, n-1);
    printf("\nQuick sort by surname name:\n");
    show(s, n);
    quickSortByRoll(s, 0, n-1);
    printf("\nQuick sort by roll number:\n");
    show(s, n);
    return 0;
}