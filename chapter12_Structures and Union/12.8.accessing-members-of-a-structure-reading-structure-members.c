/*
 * Program 12.8: Accessing members of a structure - Reading structure members
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

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

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nRoll: %d", s.roll);
    printf("\nName: %s", s.name);
    printf("\nMarks: %.2f", s.marks);

    return 0;
}
