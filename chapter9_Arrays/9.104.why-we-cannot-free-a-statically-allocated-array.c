/*
 * Program: Why We Cannot Free A Statically Allocated Array
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

int main()  // Main function: execution starts here
{
    int a[]={1, 2, 3, 4, 5};
    free(a);   // Wrong
}
