/*
 * Program 12.92: Structure and Function Pointers
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
struct student
{
    float marks;

    void foo(float m)       // Error
    {
        printf("Marks=%0.2f\n", m);
    }
};

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    struct student st;
    st.marks=97.5;
    st.foo(st.marks);
    return 0;
}
