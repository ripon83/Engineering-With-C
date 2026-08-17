/*
 * Program 12.74: Structures and Function - Dynamically Allocating Memory for the Name
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a structure used by the program.
typedef struct Student
{
    char *name;
    int age;
}students;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    students s;

    s.name=(char *)malloc(100);
    strcpy(s.name, "Jibon Taid");

    s.age=18;

    printf("Name: %s\tAge= %d\n", s.name, s.age);

    s.name[0]='R';

    printf("Name: %s\tAge= %d\n", s.name, s.age);

    free(s.name);

    return 0;
}
