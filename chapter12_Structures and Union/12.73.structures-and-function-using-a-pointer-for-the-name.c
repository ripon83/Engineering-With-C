/*
 * Program 12.73: Structures and Function - Using a Pointer for the Name
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

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

    s.name="Kankan Mili";
    s.age=18;

    printf("Name: %s\tAge= %d\n", s.name, s.age);

    s.name[0]='C';

    printf("Name: %s\tAge= %d\n", s.name, s.age);

    return 0;
}
