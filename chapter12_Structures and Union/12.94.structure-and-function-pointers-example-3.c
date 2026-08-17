/*
 * Program 12.94: Structure and Function Pointers - Example 3
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>
#include <stdlib.h>

// Define a structure used by the program.
struct student
{
    float marks;
    void (*fp)(float);
};

void show(float m)
{
    printf("Total obtained marks: %0.2f\n", m);
}

void percentage(float m)
{
    printf("Percentage: %0.2f", (m/500)*100);
}

void grade(float m)
{
    float p=(m/500)*100;

    if(p>=90)
        printf("Grade: A+\n");
    else
    if(p>=80)
        printf("Grade: A\n");
    else
    if(p>=70)
        printf("Grade: B\n");
    else
    if(p>=60)
        printf("Grade: C\n");
    else
    if(p>=50)
        printf("Grade: D\n");
    else
    if(p>=40)
        printf("Grade: E\n");
    else
        printf("Grade: F\n");
}

void demo(struct student st)
{
    int ch;

    while(1)
    {
        printf("\n\n1. Percentage\n2. Total marks\n3. Grades\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);

        if(ch<=0 || ch>=4)
            break;

        if(ch==1)
        {
            st.fp=percentage;
            st.fp(st.marks);
        }
        else if(ch==2)
        {
            st.fp=show;
            st.fp(st.marks);
        }
        else if(ch==3)
        {
            st.fp=grade;
            st.fp(st.marks);
        }
        else
            printf("Invalid choice\n");
    }
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct student st;

    st.marks=487.5;
    demo(st);

    return 0;
}
