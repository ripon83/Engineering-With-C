/*
 * Program 12.104: Nested structure and union - Array of students
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

void show(student s)
{
    if(s.isPer == 0)
        printf("Name: %s\tTotal marks: %d\n",
               s.name, s.m.mark);
    else
        printf("Name: %s\tPercentage: %0.2f\n",
               s.name, s.m.per);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    student *s = (student *)malloc(sizeof(student) * 10);

    strcpy(s[0].name, "Hemanta Pegu");
    s[0].m.per = 97.96;
    s[0].isPer = 1;
    show(s[0]);

    strcpy(s[1].name, "Hemanta Patiri");
    s[1].m.mark = 480;
    s[1].isPer = 0;
    show(s[1]);

    strcpy(s[2].name, "Chanakya Pegu");
    s[2].m.per = 98.89;
    s[2].isPer = 1;
    show(s[2]);

    free(s);
    return 0;
}
