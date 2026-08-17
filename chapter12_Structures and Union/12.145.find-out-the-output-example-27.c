/*
 * Program 12.145: Find out the output - Example 27
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct Node
{
    int data;
    struct Node *next;
}Node;

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Node a,b;

    a.data=10;
    b.data=20;

    a.next=&b;
    b.next=NULL;

    printf("%d\t%d\n",
           a.data,a.next->data);

    return 0;
}
