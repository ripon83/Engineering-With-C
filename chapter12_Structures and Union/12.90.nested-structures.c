/*
 * Program 12.90: Nested Structures
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a structure used by the program.
typedef struct Name
{
    char fname[25];
    char sname[25];
}name;

// Define a structure used by the program.
typedef struct Student
{
    name sn;
    int age;
}students;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    students s;
    s.age=18;
    strcpy(s.sn.fname, "Bijoy");
    strcpy(s.sn.sname, "Kaman");

    printf("Name: %s %s, Age: %d",
           s.sn.fname, s.sn.sname, s.age);
    return 0;
}
