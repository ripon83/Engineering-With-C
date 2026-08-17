/*
 * Program 12.93: Structure and Function Pointers - Example 2
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct student
{
    float marks;
    void (*fp)(float);
};

void foo(float m)
{
    printf("Marks=%0.2f\n", m);
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct student st;

    st.marks=97.5;
    st.fp=foo;

    st.fp(st.marks);

    return 0;
}
