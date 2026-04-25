#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Students
{
    char name[100];
    char roll[10];
    int age;
}students;


void swap(students *a, students *b)
{
    students temp = *a;
    *a = *b;
    *b = temp;
}


int hoarePartitionByName(students s[], int low, int high) 
{
    char pivot[100];
    strcpy(pivot, s[low].name);
    int i = low - 1;
    int j = high + 1;
    while (1) 
    {
        do { i++; } while (strcmp(s[i].name, pivot) < 0);
        do { j--; } while (strcmp(s[j].name, pivot) > 0);
        if (i >= j)
            return j;
        swap(&s[i], &s[j]);
    }
}

void quickSortByName(students s[], int low, int high) 
{
    if (low < high) 
    {
        int p = hoarePartitionByName(s, low, high);
        quickSortByName(s, low, p);
        quickSortByName(s, p + 1, high);
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
    printf("\nEnter the name: ");
    scanf(" %[^\n]", s->name);
    printf("Enter the roll number:");
    scanf(" %[^\n]", s->roll);
    printf("Enter the age: ");
    scanf("%d",&s->age);
    getchar();
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
        printf("%d. Name: %s\tRoll Number: %s\tAge: %d\n",i+1,s[i].name, s[i].roll, s[i].age);
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
    quickSortByName(s, 0, n-1);
    printf("\nQuick sort by name:\n");
    show(s, n);
    quickSortByRoll(s, 0, n-1);
    printf("\nQuick sort by roll number:\n");
    show(s, n);
    return 0;
}