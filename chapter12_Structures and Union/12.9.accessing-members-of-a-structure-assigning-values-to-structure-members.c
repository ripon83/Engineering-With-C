/*
 * Program 12.9: Accessing members of a structure - Assigning values to structure members
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <string.h>

// Define a structure used by the program.
struct student
{
    int roll;
    char name[50];
    float marks;
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct student s;

    s.roll = 101;
    strcpy(s.name, "John");
    s.marks = 85.5;

    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
