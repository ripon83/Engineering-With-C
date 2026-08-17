/*
 * Program 12.102: Nested structure and union
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union Contact
{
    char mphone[20];
    char lphone[20];
    char email[100];
} contact;

// Define a structure used by the program.
typedef struct Person
{
    char name[100];
    contact phone;
} person;

void show(person *p)
{
    printf("Name: %s \t Contact: %s\n",
           p->name, p->phone.email);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    person *p = (person *)malloc(sizeof(person));

    strcpy(p->name, "Sitaram Kutum");
    strcpy(p->phone.email, "email@example.com");

    show(p);

    free(p);
    return 0;
}
