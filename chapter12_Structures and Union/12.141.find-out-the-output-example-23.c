/*
 * Program 12.141: Find out the output - Example 23
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct
{
    char name[20];
    int age;
}Person;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Person p={"Ravi",20};

    printf("%s\t%d\n", p.name, p.age);
    return 0;
}
