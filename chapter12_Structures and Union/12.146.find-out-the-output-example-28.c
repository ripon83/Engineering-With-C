/*
 * Program 12.146: Find out the output - Example 28
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

typedef union
{
    int mark;
    float per;
}Marks;

// Define a structure used by the program.
typedef struct
{
    char name[20];
    Marks m;
}Student;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Student s={"Amit"};

    s.m.mark=450;

    printf("%s\t%d\n",
           s.name,s.m.mark);

    return 0;
}
