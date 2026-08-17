/*
 * Program 12.72: Structures and Function - Array of Student Structures
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct Student
{
    char name[100];
    int age;
}students;

void populate(students s[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("\nStudent %d:\n", i+1);

        printf("Enter the student's name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter the student's age: ");
        scanf("%d", &s[i].age);
    }
}

void show(students s[], int n)
{
    printf("\n");

    for(int i=0; i<n; i++)
    {
        printf("Name: %s\tAge= %d\n",
               s[i].name, s[i].age);
    }
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    students s[10];
    int n=3;

    populate(s, n);
    show(s, n);

    return 0;
}
