/*
 * Program 12.113: Student information
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Define a structure used by the program.
typedef struct student
{
    char name[100];
    char RNo[100];
    char address[100];
    float age;
    char gender;
    char branch[100];
}students;

void input(students *st, int k)
{
    char sname[100];
    char roll[100];
    char saddress[100];
    float age;

    srand(clock());
    sprintf(sname, "student%d", k);
    strcpy(st->name, sname);

    sprintf(roll, "Roll %d", k);
    strcpy(st->RNo, roll);

    sprintf(saddress, "PIN %d", rand());
    strcpy(st->address, saddress);

    age=rand()%10+18+(rand()%10+18)/28.0;
    st->age=age;

    if(rand()&1)
        st->gender='M';
    else
        st->gender='F';

    strcpy(st->branch, "CSE");
}

void show(students st, int k)
{
    printf("\n%d\n", k);
    printf("Roll No: %s\n", st.RNo);
    printf("Name: %s\n", st.name);
    printf("Address: %s\n", st.address);
    printf("Age: %0.2f\n", st.age);
    printf("Gender: %c\n", st.gender);
    printf("Branch: %s\n", st.branch);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    int i;
    struct student st[10];

    for(i=0; i<10; i++)
        input(&st[i], i+1);

    for(i=0; i<10; i++)
        show(st[i], i+1);

    return 0;
}
